#include <iostream>
using namespace std;
int main(){
    char a [500]="";
    char b[200]="";
    int n,m;
    int freq[26]={0};
    int freq2[26]={0};
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int t=0;
    if (n==m){
        for(int i=0;i<n;i++){
            freq[a[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            freq2[b[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            if (freq[i]==freq2[i]){
                t++;
            }
            else{
                cout<<"String are not permutation ot each other";
                break;
            }
        }
    }
    else{
        cout<<"String are not permutation ot each other";
    }
    if(t>0){
        cout<<"String are permutation ot each other";
    }
    
}