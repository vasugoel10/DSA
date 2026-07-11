#include <iostream>
using namespace std;
bool isSorted(int arr[],int n,int i=0){
    if (i==n-1){
        return true;
    }
    if (arr[i]>arr[i+1]){
        return false;
    }
    return isSorted(arr,n,i+1);
}
int main() {
    int arr[]={1,6,2,8,9};
    int n=5;
    cout<<isSorted(arr,5);
}
