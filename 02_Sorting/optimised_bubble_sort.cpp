#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
        int cnt=0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                cnt++;
            }
        }
        if (cnt==0){
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}