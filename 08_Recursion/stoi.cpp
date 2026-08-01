#include <iostream>
using namespace std;
int Stringtointeger(char arr[],int n){
    if (n==0){
    return 0;}
    int ld=arr[n-1]-'0';
    int chotu=Stringtointeger(arr,n-1);
    return chotu*10+ld;
}
int main(){
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=Stringtointeger(arr,n);
    cout<<++m;
}