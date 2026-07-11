#include <iostream>
using namespace std;
void Printarray(int arr[],int n,int i=0){
    if (i==n){
        cout<<"\n";
        return;
    }
    cout<<*(arr+i)<<" ";
    Printarray (arr, n ,i+1);
}
void Reversearray(int arr[],int n,int j=0){
    int i=n-1;
    if (i==-1){
        cout<<"\n";
        return;
    }
    cout<<*(arr+i)<<" ";
    Reversearray (arr, n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[10000];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    Printarray(arr,n);
    Reversearray(arr+2,n);
    return 0;
}