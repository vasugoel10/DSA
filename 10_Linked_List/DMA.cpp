#include <iostream>
using namespace std;
int *CreateArray(int n){
    int *arr=new int[n];
    return arr;
}
// 2D array

int main(){
    int *a=CreateArray(10);
}