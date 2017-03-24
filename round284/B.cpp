#include <bits/stdc++.h>
using namespace std;
map < string , string > A;  
int main(){
	int n,m;
	cin >> n >> m;
	string x,y;
	for ( int i = 0 ; i < m ; i++ ) {
		cin >> x >> y;
		if ( x.size() <= y.size() ) A[y] = x, A[x] = x;
		else A[x] = y, A[y] = y;
	}

	for ( int i = 0 ; i < n ; i++ ) {
		cin >> x;
		cout << A[x] << " ";
	}
	cout << endl;
	return 0;
}
