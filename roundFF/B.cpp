#include <bits/stdc++.h>
#define N ('z'-'a'+1)
using namespace std;

int main(){
	string S;
	int k, a, may = -1;
	int A[N];
	cin >> S; cin >> k;
	for ( int i = 0 ; i < 26 ; i++ ){
		cin >> A[i];
		may = max( may, A[i]);
	}
	int acum = 0;
	for ( int i = 1 ; i <= S.size() ; i++ ){
		acum += (i * (A[S[i-1]-'a']) );
	}
	cout << k * ( k + S.size() * 2 + 1) * may / 2 + acum  << endl;
	return 0;
}

