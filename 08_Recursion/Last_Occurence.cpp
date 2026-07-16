#include <iostream>
using namespace std;
int LastOccurenece(int arr[],int n,int key){
   if (n==0){
    return -1;
   }
   if(arr[n-1]==key){
    return n-1;
   }
   int i=LastOccurenece(arr,n-1,key);
   return i;
}
int main(){
    int arr[]={2,5,3,6,9,8};
    int n=7;
    cout<<LastOccurenece(arr,7,5);
}