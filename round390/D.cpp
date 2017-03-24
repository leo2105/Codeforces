#include <bits/stdc++.h>
using namespace std;

struct nodo{
	int lo,hi;
}

int func ( nodo A, nodo B){
	if ( A.lo < B.lo ) return true;
	if ( A.lo == B.lo && A.hi < B.hi) return true;
	return false;
}

int main(){

	int k,n,l,r,p,a,b;
	cin >> n >> k;
	vector<nodo> A;

	for ( int i = 0 ; i < n ; i++ ) {
		cin >> a >> b;
		nodo x;
		x.lo = a , x.hi = b;
		A.push_back(x);
	}	 	
	
	sort ( A.begin(), A.end(), f );
		
	
	return 0;
}
