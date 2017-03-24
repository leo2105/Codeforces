#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,n1,n2,a;
	vector<int> A;
	cin>>n>>n1>>n2;
	for( int i = 0 ; i < n ; i++){
		cin>>a;A.push_back(a);
	}
	sort(A.rbegin(),A.rend());
	
	ll S1=0LL,S2=0LL;
	
	for(int i=0;i<min(n1,n2);i++){
		S1 += (ll)(A[i]);
	}
	for(int i=min(n1,n2);i<n1+n2;i++){
		S2 += (ll)(A[i]);
	}
	
	double P1,P2;
	P1 = (double)S1/(double)(min(n1,n2));
	P2 = (double)S2/(double)(max(n1,n2));

	printf("%.8f\n",P1+P2);

	return 0;
}
