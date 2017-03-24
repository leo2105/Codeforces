#include <bits/stdc++.h>
using namespace std;

int A[105];
int main(){
	int n,sum = 0;
	cin >> n;
	for (int i = 0 ; i < n ; i++ ) cin >> A[i], sum += A[i];
	sort(A,A+n);
	int cont = 0;
	for ( int  i = n - 1 ; i >= 0 ; i-- ){
		cont += A[i];
		if ( cont > sum/2 ){
			cout << n-i << endl; break;
		}
	}
	
	return 0;
}
