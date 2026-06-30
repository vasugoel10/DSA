#include<iostream>
using namespace std;
int main () {
	int a,b,c,d,e;
	cin>>a>>b>>c>>d>>e;
	int arr[5]={a,b,c,d,e}; int max=arr[0];
	for (int i=0;i<5;i++){
		if (max<arr[i]){
			max=arr[i];
		}
	}
	cout<<max<<endl;
	return 0;
}