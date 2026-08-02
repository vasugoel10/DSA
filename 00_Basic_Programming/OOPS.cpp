#include <iostream>
#include <cstring>
using namespace std;
class Car{
    int price;
    public:
    string name;
    int model;
    Car(){
    cout<<" "<<endl;
    }
    Car(string s,int p,int m){ // parameter constructor
        name=s;
        price=p;
        model=m;
    }
    Car(Car &x){ // copy constructor 
        name=x.name;
        Setprice(x.price);
        model=x.model;
    }
    // Copy assignment Operator
    void operator=(Car x){
        name=x.name;
        Setprice(x.price);
        model=x.model;
    }
    void Print(){
        cout<<name<<endl;
        cout<<Getprice()<<endl;
        cout<<model<<endl;
    }
    void Setprice(int n){
        price =n;
    }
    int Getprice(){
        return price;
    }
};
int main(){
    Car A;
    A.name="Maruti";
    A.Setprice(120);
    A.model=2022;
    Car B;
    B.name="Suzuki";
    B.Setprice(400);
    B.model=2026;
    Car C("BMW M4",10000,2026);
    Car D;
    D=C;
    D.Print();
}