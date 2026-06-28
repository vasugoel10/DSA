#include <iostream>
using namespace std;
int main() {
int arr[10]={1,28,7,5,6,4,5,83,20,10};
int n=sizeof(arr)/sizeof(int);
for (int i=n-1;i>=0;i--){
    cout<<arr[i]<<endl;
}}