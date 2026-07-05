#include <iostream>
#include <algorithm>
using namespace std;
void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        for (int j=i-1;j>=0 and a[j]>a[j+1];j--){
            swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int a[]={5,9,3,7,1};
    InsertionSort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}
