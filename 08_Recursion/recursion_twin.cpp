#include<iostream>
using namespace std;
int Twin(string s){
	if(s.size()<3){
		return 0;
	}
	if(s[0]==s[2]){
		return 1+Twin(s.substr(1,s.size()-1));
	}
	int count=Twin(s.substr(1,s.size()-1));
	return count;
}
int main() {
	string s;
	cin>>s;
	cout<<Twin(s);
	return 0;
}