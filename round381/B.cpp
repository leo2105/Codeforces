#include <bits/stdc++.h>
using namespace std;

struct nodo{
	int lo,hi;
};

const int N = 1e2+5;
int A[N];
vector<nodo> B;
vector<int> S;

int main(){
	int n,m;
	int a,b;

	cin >> n >> m;

	for ( int i = 0 ; i < n ; i++ ) cin >> A[i] ;

	for ( int i = 0 ; i < m ; i++ ) {
		nodo x; cin >> a >> b;
		x.lo = a , x.hi = b;
		B.push_back(x);
	}
		
	int sum;

	for ( int i = 0 ; i < B.size() ; i++ ) {
		sum = 0 ;
		for ( int j = B[i].lo - 1 ; j < B[i].hi ; j++ ) sum += A[j];
		S.push_back(sum);
	}
	
	sort(S.rbegin(),S.rend());
	
	int rpta = 0;
	
	for ( int i = 0 ; i < S.size() ; i++ ) {
		if ( S[i] > 0 ) rpta += S[i];
		else break;
        }
		
	cout << rpta << endl;
	return 0;
}	
