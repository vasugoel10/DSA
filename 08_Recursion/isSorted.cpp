#include <iostream>
using namespace std;
bool IsSorted(int arr[],int n){
    if(n==1){
        return true;
    }
    if(IsSorted(arr,n-1) and arr[n-1]>=arr[n-2]){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    int arr[]={1,2,6,8,9};
    int n=5;
    cout<<IsSorted(arr,5);
}