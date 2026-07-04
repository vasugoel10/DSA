#include <iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   for (int i=2; i<=n;i++){
int c=0;
    for (int j=2;j<i;j++){
        if (i%j==0){
            c+=1;
        }
    }
    if (c==0){
        cout<<i<<endl;
    }
   }
}
//Funcution approach 
bool isPrime(int n, int i) {
    if (n <= 1)
        return false;
    if (i * i > n)
        return true;
    if (n % i == 0)
        return false;
    return isPrime(n, i + 1);
}
