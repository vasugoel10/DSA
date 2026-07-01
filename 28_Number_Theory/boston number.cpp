#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int k=n;
	int arr[100];
	int sum=0;
	int m=0;
	while(n>0){
	sum+=n%10;
	n/=10;}
	for(int i=2;i*i<=k;i++){
		while(k%i==0){
			int t=i;
			while(t>0){
				m+=t%10;
				t/=10;
			}
			k/=i;
		}
	}
	if(k > 1){
    int t = k;
    while(t > 0){
        m += t % 10;
        t /= 10;
    }
}
	if(sum==m){
		cout<<1<<endl;
	}
	else{
		cout<<0<<endl;
	}
	return 0;
}
