#include <iostream>
using namespace std;
int FirstOccurenece(int arr[],int n,int key){
    if (n==0){
        return -1;
    }
    if (arr[0]==key){
        return 0;
    }
    int i=FirstOccurenece(arr+1,n-1,key);
    if(i==-1){
        return -1;
    }
    return i+1;
}
int main(){
    int arr[]={2,5,3,6,9,8};
    int n=7;
    cout<<FirstOccurenece(arr,7,8);
}