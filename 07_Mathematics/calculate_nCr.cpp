#include <iostream>
using namespace std;
int nCr(int n,int r){
    if (n>r) {
    if (r==0){
        return 1;
    }
    else {
        return ((n-r+1)*nCr(n,r-1)/r);
    }}
    else {
        return -1;
    }
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<nCr(n,r);
}
