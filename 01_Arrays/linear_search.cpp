#include <iostream>
using namespace std;
int main() {
    int k;
    cout<<"Enter the number to search:";
    cin>>k;
int arr[10]={1,28,7,5,6,4,5,83,20,10};
int n=sizeof(arr)/sizeof(int);
int t=0;
for (int i=n-1;i>=0;i--){
    if(arr[i]==k) {
        t+=1;
    }
}
if (t==1){
    cout<<"Found";

}
else{
    cout<<"Not found";
}}