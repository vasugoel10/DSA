#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int c=0;
	for(int i=0;i<n;i++){
		if(arr[i]==target){
			cout<<i<<endl;
			c++;
		}

	}
	if (c==0){
		cout<<"-1"<<endl;
	}
	return 0;
}