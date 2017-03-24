#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int A[N];
int main(){
	int n;
	cin >> n;
	int men = N;
	for ( int i = 0 ; i < n ; i++ ) {cin >> A[i];}
	for ( int i = 0 ; i < n ; i++ ) men = min ( men, A[i]);

	int cont = 1;
	int rpta=0;
	bool flag = false;
	for ( int i = 0 ; i < 2*n-1 ; i++ ){
		if ( A[i%n] <= A[(i+1)%n] )
			cont++;
		else
			cont = 1;
		if ( cont == n)
			flag = true;
	}
	
	if (flag){
		int men = N;
		for ( int i = 0 ; i < n ; i++ )
			if ( A[(i-1+n)%n] > A[i]) rpta = (n-i)%n;
		cout << rpta << endl;
	}else{
		cout << -1 << endl;
	}
	return 0;
}
