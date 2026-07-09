#include<iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[100000];
	for (int i=0; i<n;i++){
		cin>>arr[i];
	}
	int k=0;
	for (int i=0; i<n-1;i++){
		if (arr[i]!=0){
		continue;
		}
		else {
			if (arr[i]==0 and arr[i+1]==0){
				k++;
			}
			else {
				swap(arr[i-k],arr[i+1]);
			}
		}
	}
	for (int i=0; i<n;i++){
			cout<<arr[i]<<" ";
		}
	return 0;
}