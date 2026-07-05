#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
double Median(int a[],int b[],int n,int m){
     if (m > n){
        return Median(b, a,m,n);
    }
    int low=0;
    int high=n;
    while(low<=high){
        int mid1=low + (high - low) / 2;
        int mid2=(n+m)/2-mid1;
         int maxLeft1 = (mid1 == 0) ? INT_MIN : a[mid1 - 1];
        int minRight1 = (mid1 == n) ? INT_MAX : a[mid1];

        int maxLeft2 = (mid2 == 0) ? INT_MIN : b[mid2 - 1];
        int minRight2 = (mid2 == m) ? INT_MAX : b[mid2];

        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            if ((n + m) % 2 == 0) {
                return (max(maxLeft1, maxLeft2) +
                        min(minRight1, minRight2)) / 2.0;
            }
            return max(maxLeft1, maxLeft2);
        }

        else if (maxLeft1 > minRight2) {
            high = mid1 - 1;
        }

        else {
            low = mid1 + 1;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cin>>n;
    int a[100000];
    int b[100000];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for (int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<Median(a,b,n,m);
}