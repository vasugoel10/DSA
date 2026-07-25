#include <iostream>
using namespace std;
void Merge(int a[], int b[], int c[],int s, int e){
    int mid=(s+e)/2;
    int i=s,j=mid+1,k=s;
    while(i<=mid and j<=e){
        if(b[i]<c[j]){
            a[k++]=b[i++];
        }
        else
        {
            a[k++]=c[j++];
        }
    }
    while(i<=mid){
        a[k++]=b[i++];
    }
    while(j<=e){
        a[k++]=c[j++];
    }
}
void MergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int b[1000],c[1000];
    int mid=(s+e)/2;
    for(int i=s;i<=mid;i++){
        b[i]=arr[i];
    }
    for(int i=mid+1;i<=e;i++){
        c[i]=arr[i];
    }
    MergeSort(b,s,mid);
    MergeSort(c,mid+1,e);
    Merge(arr,b,c,s,e);
}
int main(){
    int arr[]={3,7,2,4,5};
    int n=sizeof(arr)/sizeof(int);
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}