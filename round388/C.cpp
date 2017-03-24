#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
bool vis[N];
set<int> R,D;

int main(){
	int n, aux;
	string S;
	cin >> n;
	cin >> S;
	for ( int i = 0 ; i < S.size() ; i++ ) 
		if ( S[i] == 'D') D.insert(i);
		else R.insert(i);
	int r, d;
	while ( !R.empty() && !D.empty() ) {
		r = *R.begin(), d = *D.begin();
		R.erase(R.begin()), D.erase(D.begin());
		if ( r < d ) 
			R.insert(r+n);
		else
			D.insert(d+n);
	}
	
	R.empty() ? puts("D") : puts("R");
	return 0;
}
