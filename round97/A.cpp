#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin >> n;
	int B[105];
	for ( int i = 1 ; i <= n ; i++ ){
		cin >> a;
		B[a] = i;
	}
	for ( int i = 1 ; i <= n ; i++ )
		cout << B[i] << " ";
	cout << endl;
	return 0;
}
