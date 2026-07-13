#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    char a=s[0];
    string b="";
    int t=0;
    b+=s[0];
    for (int i=0;i<n;i++){
        if (a==s[i]){
            t++;
        }
        else if(a!=s[i]){
            b+=to_string(t);
            a=s[i];
            b+=s[i];
            t=1;
        }
    }
    b+=to_string(t);
   cout<<b;

    return 0;
}
