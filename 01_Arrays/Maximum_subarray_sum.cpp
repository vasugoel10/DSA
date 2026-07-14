#include <iostream>
#include <climits>
using namespace std;
// Better solution 
int TwoLoopCIrcularsum(int arr[],int n){
    int Prefixsum[10000];
    int sum=0;
    for(int i=0;i<n;i++){
     sum+=arr[i];
     Prefixsum[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<Prefixsum[i]<<endl;
    }
    int maxS=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int ans=0;
            if (i-1>=0){
                ans=Prefixsum[j]-Prefixsum[i-1];
            }
            else{
                ans=Prefixsum[j];
            }
    return 0; 
}}}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    TwoLoopCIrcularsum(arr,n);
}
// Brute force approach 
int ThreeloopCircularSum(int arr[],int n){
    int maxS=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int ans=0;
            for(int k=i;k<=j;k++){
                ans+=arr[k];
            }
            maxS=max(ans,maxS);
        }
    }
    return maxS;
}
