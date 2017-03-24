#include <bits/stdc++.h>
using namespace std;
const int d = 'a' - 'A';
int main(){
	string A,B;
	cin >> A >> B;
	for( int  i = 0 ; i < A.size() ; i++ ){
		if ( A[i] >= 'a') A[i] -= d;
		if ( B[i] >= 'a') B[i] -= d;
		if ( A[i] > B[i] ){ cout << 1 ; return 0;}
		if ( A[i] < B[i] ){ cout << -1 ; return 0;}
	}
	cout << 0 << endl;
	
	return 0;
}	
