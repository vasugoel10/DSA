#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long arr[100000];
    long long left[100000];
    left[0]=1;
    long long right[100000];
    right[n-1]=1;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        left[i+1]=arr[i]*left[i];
    }
    for (int i=n-1;i>=0;i--){
        right[i-1]=arr[i]*right[i];
    }
    for (int i=0;i<n;i++){
        cout<<left[i]*right[i]<<" ";
    }
return 0;
}