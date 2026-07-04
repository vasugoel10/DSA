#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100000];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

if (n == 0) {
    cout << -1 << endl;
    return 0;
}
	int m;
	cin>>m;
	int low=0;
	int high=n-1;
	int mid=low+(high-low)/2;
	while(arr[mid]!=m){
		if(arr[mid]>m){
			high=mid-1;
		}
		else if (arr[mid]<m){
			low=mid+1;
		}
		mid=low+(high-low)/2;
		if (low>high){
			cout<<-1<<endl;
		break;
	}}
	if (arr[mid]==m){
		cout<<mid<<endl;
	}
	return 0;
}