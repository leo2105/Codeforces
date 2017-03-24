#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,l,h;
	cin >> N;
	int A[N+5];
	vector<int> L,R;	
	bool flag = false;

	for (int i = 0 ; i < N ; i++) cin >> A[i];
		
	l = 0 , h = 0 ; 
	int pos = 0 ;
	
	for ( int i = 0; i< N ; i++ )
		if ( A[i] != 0)
			flag = true;

	if ( !flag ){
		cout << "NO" << endl; return 0;
	}

	while ( pos < N ) {
		if ( A[pos] != 0  ){
			L.push_back(l+1); R.push_back(pos+1);
			l = pos+1;
		}	
		pos++;
	}
	
	if ( A[N-1] == 0 ) 
		R[R.size()-1] = N;
	
	cout << "YES" << endl;
	cout << L.size() << endl;
	for (int  i = 0; i < L.size() ; i++ ) 
		cout << L[i] << " " << R[i] << endl;
	
	return 0;
}
