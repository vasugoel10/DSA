#include <iostream>
using namespace std;
int main() {
int arr[10]={300,5,3,67,45,89,45,234,87,32};int max=arr[0];
for(int i=0;i<10;i++){
if (max<arr[i]){
    max=arr[i];
}
}
cout<<"max:"<<max<<endl;
}