#include <iostream>
#include <cstring>
#include <climits>
#include<algorithm>
using namespace std;
int LengthString(string a){
    int length=0;
    while(a[length]!='\0'){
        length++;
    }
    return length;
}
bool Palindrome(string s){
    int length=s.size();
    string k="";
    for(int i=length-1;i>=0;i--){
        k+=s[i];
    }
    if(s==k){
        return true;
    }
    else {
        return false;
    }
}
void Append(char *a,char *b){
    int len_a=strlen(a);
    int len_b=strlen(b);
    char *p=a;
    for (int i=0;i<len_b;i++){
        *(p+len_a+i)=b[i];
    }
    p[len_a + len_b] = '\0';
}
void LargestString(int n, char largest[]) {
    char current[100];
    largest[0] = '\0';
    for (int i = 0; i < n; i++) {
        cin.getline(current, 100);

        if (strlen(current) > strlen(largest)) {
            strcpy(largest, current);
        }
    }
}
void ReverseArray(char *a){
    int len=strlen(a);
    int i=0;
    int j=len-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;}
}
void StringRotation(int n,char *a){
int len=strlen(a);
n=n%len;
reverse(a,a+len);
reverse(a,a+n);
reverse(a+n,a+len);
}
bool permutationcheck(char *a, char*b){
    int len_a=strlen(a);
    int len_b=strlen(b);
    int t=0;
    if (len_a!=len_b){
        return false;
    }
    else {
        for(int i=0;i<len_a;i++){
            for (int j=0;j<len_a;j++){
                if (a[i]==b[j]){
                    b[j]=' ';
                    t++;
                    break;
                }
            }
        }
        if(t==len_a){
            return true;
        }
        else{
            return false;
        }
    }}
int main(){    
    char a[100];
    cin.getline(a,100);
    char b[]={'V','a','s','u','\0'};
    // ReverseArray(a);
    StringRotation(5,a);
    // cout<<permutationcheck(a,b);
    cout<<a<<endl;
}