#include<iostream>
#include <algorithm>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int arr[100002];
		for (int i=0;i<n;i++){
			cin>>arr[i];
		}
		int m;
		cin>>m;
		sort(arr,arr+n);
		int i=0;
		int j=n-1;
		int ans1=0;
		int ans2=0;
		while(i<j){
			if (arr[i]+arr[j] >m){
				j-=1;
			}
			else if (arr[i]+arr[j] <m){
				i+=1;
			}
			else{
				ans1=arr[i];
				ans2=arr[j];
				j--;
				i++;
			}
		}
		cout<<"Deepak should buy roses whose prices are "<<ans1<<" and "<<ans2<<"."<<endl;
	}
	return 0;
}