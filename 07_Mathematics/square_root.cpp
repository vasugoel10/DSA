#include <iostream>
using namespace std;
int main(){
int val;
cin>>val;
int i=0;
while (i*i<=val) {
    i+=1;
}
double j=0.0;
while((i+j-1)*(i+j-1)<val){
    j+=1.0/10;
}
double k=0.00;
while((i+j+k-1-0.1)*(i+j+k-1-0.1)<val){
    k+=1.0/100;
}
cout<<"square root:"<<i+j+k-1-0.1-0.01<<endl;
}
