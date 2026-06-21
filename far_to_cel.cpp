#include <iostream>
using namespace std;
// (farhenheit to celcius with init , final ,step)
void table(int initial_value, int final_value,int step) {
double C;
for (int i=initial_value; i<=final_value;i+=step){
    C= 5.0*(i-32)/9;
    cout<< i << "  " << C << endl;
}
}
int main() {
    table(5,30,2);
}