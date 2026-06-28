#include <iostream>
using namespace std;
int main(){
  // temperorary variable
  int a=10;
  int b=15;
  int temp=b;
  b=a;
  a=temp;  
  cout<<a<<b<<endl;
  // using addition 
  a=a+b;
  b=a-b;
  a=a-b;
  // single line swao
} 
