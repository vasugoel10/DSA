#include <iostream>
using namespace std;
int main(){
    // Expected way
    int a =10;
    int *p=&a;
    int **c=&p;
    cout<<*p+1<<endl;
    cout<<&a<<endl;

    // Actual waycls
    // cout<<(void*)p;
    return 0;
}
//10
// 100
// 100
// 200
//10

