#include<iostream>
using namespace std;
int main() {
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4;
		int n,m;
		cin>>n>>m;
		int rickshawCost = 0;
		for (int i = 0; i < n; i++) {
			int rides;
			cin >> rides;
			rickshawCost += min(rides * c1, c2);
			}
			int Totalrickshaw=min(rickshawCost,c3);
		int CabCost = 0;
		for (int i = 0; i < m; i++) {
			int rides;
			cin >> rides;
			CabCost += min(rides * c1, c2);
			}
			int CabcostTotal=min(CabCost,c3);
		int Final=min(CabcostTotal+Totalrickshaw,c4);
		cout<<Final<<endl;
	}
	return 0;
}