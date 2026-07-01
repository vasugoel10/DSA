#include <iostream>
using namespace std;
int main() {
    int a[100];
    int n;
    cout<<"Enter n(Max: 100):"<<endl;
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Enter"<<i+1<<"number"<<endl;
        cin>>a[i];

    }
    for (int i=0;i<n;i++) {
        cout<<a[i] <<" ";

    }
}