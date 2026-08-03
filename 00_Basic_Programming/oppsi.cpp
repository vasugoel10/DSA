#include <iostream>
#include<cstring>
using namespace std;
// BLUE PRINT
class Car
{
    private:
    int price; //
public:
    char *name;  // does DMA 
    int model;
    //Default constructor is a function , work is to only create an object 
    Car(){
        name=NULL; //We never leave garbage in pointer

        cout<<"Inside Default Constructor\n";
    }
    
    //parameterized constructor
    Car(char *n,int p,int m){
         cout<<"Inside Parameterized Constructor\n";
         //delete []name yaha nahi karoge
         //kyunki constructor first time jab object banta hai tab call hota isse pehle name mei kuch or ni ho 
         //skta
         name=new char(strlen(n)+1);
        strcpy(name,n);
        price=p;
        model=m;

    }
    //copy construcotr d create ho rha hai vohi call karta h iss function ko
    Car(Car &X){
        cout<<"Inside Copy Constructor\n";

          strcpy(name,X.name);
        price=X.price;
        model=X.model;
    }
    //Copy Assignment operator its not a constructor
    void operator=(Car X)// the operator we want to apply lie =,+,-,>,<, you have to write that{

   {cout<<"Inside Copy Assignment \n";
     strcpy(name,X.name);
        price=X.price;
        model=X.model;

   }
   //Funtions
   void print(){
    cout<<"Name:"<<name<<endl;
     cout<<"Model:"<<model<<endl;
      cout<<"Price:"<<price<<endl;
   }
   //Price ka getter and setter
   void setPrice(int p){
    if(p>=100 and p<200){
        price=p;
    }
    else{
        price=120;
    }

   }
   int getPrice(){
    return price;
   }
   //updating name
   void SetName(char *n){
      if(name!=NULL){
        delete []name;
      }
      name=new char(strlen(n)+1);
      strcpy(name,n);
   }


}; 
int main()
{
    Car A; // create
    //strcpy(A.name, "Maruti"); this won't work
    A.SetName("Maruti");
    //A.price = 100;
    A.setPrice(100);
    A.model = 2022;
    // cout << A.name << endl;
    // cout << A.model << endl;
    // cout << A.price << endl;
    
    cout<<A.getPrice()<<endl;
    A.print();
    Car B;
    strcpy(B.name, "BMW");
    B.setPrice(120);
    B.model = 2012;
     cout << B.name << endl;
     cout << B.model << endl;
    // cout << B.price << endl;
    cout<<B.getPrice()<<endl;
    B.print();
    Car C("BMW",120,2025);


    //  cout << C.name << endl;
    // cout << C.model << endl;
    // cout << C.price << endl;
    C.print();
    Car D=A; //copy constructor
    //  cout << D.name << endl;
    // cout << D.model << endl;
    // cout << D.price << endl;
    D.print();
    Car E;// default constrcutor
    E=A;// copy assignment operator call karega
    //  cout << E.name << endl;
    // cout << E.model << endl;
    // cout << E.price << endl;
    E.print();

    return 0;
}