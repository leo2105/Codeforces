#include <bits/stdc++.h>
using namespace std;

int main(){
	int S[55], K[55];
	int n, L;
	cin >> n >> L;

	for ( int i = 0 ; i < n ; i++ )
		cin >> K[i];
	for ( int i = 0 ; i < n ; i++ )
		cin >> S[i];

	bool Pista[205];	
	memset ( Pista,  false, sizeof Pista );

	for ( int i = 0 ; i < n ; i++ )
		Pista[K[i]] = Pista[K[i]+L] = true;

	int cont;
	bool flag = false;
	for ( int i = 0 ; i < L ; i++ ){
		cont  = 0;
		for ( int j = 0 ; j < n ; j++ ){
			//cout << S[j] + i << " ";
			if ( Pista[S[j]+i] == true )
				cont++;
		}
		if ( cont  == n ){
			flag = true;
			break;
		}
	}
	
	flag ? cout << "YES" : cout << "NO";
	cout << endl;
	 
	

	
	return 0;
}
