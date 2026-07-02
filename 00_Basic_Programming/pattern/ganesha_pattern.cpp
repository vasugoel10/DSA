#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		if (i==1){
			cout<<"*";
			string s((n-3)/2,' ');
			cout<<s;
			string k((n+1)/2,'*');
			cout<<k;
			cout<<endl;
		}
		else if (i==n){
			string k((n+1)/2,'*');
			cout<<k;
			string s((n-3)/2,' ');
			cout<<s;
			cout<<"*";
			cout<<endl;
		}
		else if (i==(n+1)/2){
			string s(n,'*');
			cout<<s;
			cout<<endl;
		}
		if (i<(n-1)/2){
			cout<<"*";
			string s((n-3)/2,' ');
			cout<<s;
			cout<<"*";
			cout<<endl;
		}
		else if (i>(n+1)/2 and i<n){
			string k((n-1)/2,' ');
			cout<<k;
			cout<<"*";
			string s((n-3)/2,' ');
			cout<<s;
			cout<<"*";
			cout<<endl;
		}
	}
	return 0;
}