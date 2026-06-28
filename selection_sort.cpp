#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i=0;i<n;i++){
    int m=i;
     for (int j=i;j<n;j++){
        if(arr[j]<arr[m]){
            m=j;
        }
     } 
     swap(arr[i],arr[m]);
    }
     for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}