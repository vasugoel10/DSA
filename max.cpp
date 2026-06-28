#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr[100];
for (int i=0;i<n;i++){
    cout<<"Enter "<<i+1<<" number";
    cin>>arr[i];
}
 int max=arr[0];
for(int i=0;i<n;i++){
if (max<arr[i]){
    max=arr[i];
}
}
cout<<"max:"<<max<<endl;
}