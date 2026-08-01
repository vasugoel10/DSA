#include <iostream>
using namespace std;
void subsequences(char*in,char *op,int i, int j){
    if(in[i]=='\0'){
        op[j]='\0';
        cout<<op<<endl;
        return;
    }
    subsequences(in,op,i+1,j);
    op[j]=in[i];
    subsequences(in,op,i+1,j+1);
}
int main(){
    char a[]="get";
    char op[100];
    subsequences(a,op,0,0);
}