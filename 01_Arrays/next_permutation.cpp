#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[100000];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=n-2;
	while(i>=0 && arr[i]>=arr[i+1]){
		i--;
	}
	if(i >= 0){
    int j = n - 1;
    while(arr[j] <= arr[i]){
        j--;
    }
    swap(arr[i], arr[j]);
	reverse(arr + i + 1, arr + n);;
}
if (i==-1){
	reverse(arr + i + 1, arr + n);;
}
for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}