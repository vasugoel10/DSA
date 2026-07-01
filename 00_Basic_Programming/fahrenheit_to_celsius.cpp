#include <iostream>
using namespace std;
void table(int initial_value, int final_value,int step) {
double C;
for (int i=initial_value; i<=final_value;i+=step){
    C= 5*(i-32)/9;
    cout<< i << "  " << C << endl;
}
}
int main() {
    int init;
    cin>>init;
    int final;
    cin>>final;
    int step;
    cin>>step;
    table(init,final,step);
}