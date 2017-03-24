#include <bits/stdc++.h>
using namespace std;

int A[105];
int main(){
	int n,a;
	cin >> n;
	for ( int i = 0 ; i < n ; i++ ){
		cin >> a;
		A[i] = a;}

	int may = -1;
	for ( int i = 0 ; i < n ; i++)
		may = (may > A[i] ? may : A[i] );
	
	int rpta = 0;
	for ( int  i = 0 ; i < n ; i++ )
		rpta += (may -A[i]);
	
	cout << rpta << endl;
	return 0;
}
