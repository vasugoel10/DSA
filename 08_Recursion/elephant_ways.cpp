#include <iostream>
using namespace std;
int ElephantWays(int i,int j){
    if(j==0 and i==0){
        return 1;
    }
    if(i<0 or j<0){
        return 1;
    }
    int ans=0;
    for(int k=0;k<i;k++){
        ans+=ElephantWays(k,j);
    }
    for(int k=0;k<j;k++){
        ans+=ElephantWays(i,k);
    }
    return ans;
}
int main(){
    cout<<ElephantWays(2,2);
}