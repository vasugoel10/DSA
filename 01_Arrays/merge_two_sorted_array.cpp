#include <iostream>
using namespace std;
void merge_sorted(int a[],int b[],int m,int n){
    int i=m-1;
    int j=n-1;
    int k= m+n-1;
    while(i>=0 and j>=0){
        if (a[i]>b[j]){
            a[k--]=a[i--];
        }
        else {
            a[k--]=b[j--];
        }}
    while(j>=0){
            a[k--]=b[j--];
        }

}
int main(){
    int a[7]={3,4,6,8};
    int b[3]={1,2,5};
    merge_sorted(a,b,4,3);
    for (int i=0;i<7;i++){
        cout<<a[i]<<endl;
    }
}