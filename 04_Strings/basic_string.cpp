#include <iostream>
using namespace std;
int main(){
    // use of cin.get and cin.getline
    char a[100];
    // array ka name and number of character array mai, delimiter bhi daal sakte ho
    cin.getline(a,100);//by default delimiter enter hota hai
    // use of cin.get
    char b;
    cin.get(b);
    cout<<b<<endl;
    int x;
    cin>>x;
    cin.ignore();
    cin.getline(a,100);
    cout<<x<<endl;
    
    return 0;
}