#include <iostream>
#include <climits>
using namespace std;
int Kaladanealgo(int arr[],int n){
int ans=0,sum=0;
int mx=INT_MIN;
for(int i=0;i<n;i++){
    mx=max(mx,arr[i]);
}
if (mx<0){
    return mx;
}
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum<0){
        sum=0;
    }
    ans=max(ans,sum);

}
return ans;}
int Most_optimal(int arr[],int n){
     int currMax = arr[0];
        int Maxnormal = arr[0];
        for (int i = 1; i < n; i++) {
            currMax = max(arr[i], currMax + arr[i]);
            Maxnormal = max(Maxnormal, currMax);
        }
}
int main(){}