#include <iostream>
using namespace std;
void subarray(char arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<endl;
        }
    }
}
int main(){
    char str[]="abc";
    int n=3;
    subarray(str,n);
}