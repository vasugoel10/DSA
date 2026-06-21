#include <iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    string m=to_string(k);
    string l="";
    
    for (int i=m.size()-1;i>=0;i--){
        l+=m[i];
    }
    cout<<l<<endl;
}