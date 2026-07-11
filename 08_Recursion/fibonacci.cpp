#include <iostream>
using namespace std;
int Fibocanni(int n){
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return Fibocanni(n-1)+Fibocanni(n-2);
}
int main(){
    cout<<Fibocanni(7);
}