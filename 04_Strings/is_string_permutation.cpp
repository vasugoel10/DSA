#include <iostream>
using namespace std;
bool IsPermutation(char*a,char*b){
    int freq[26]={0};
    for(int i=0;a[i]!='\0';i++){
        freq[a[i]-'a']++;
    }
    for(int i=0;b[i]!='\0';i++){
        freq[b[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if (freq[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
}