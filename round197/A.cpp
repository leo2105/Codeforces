#include <bits/stdc++.h>
using namespace std;

int main(){
	string A;
	cin >> A;
	vector<int> B;
	for(int i = 0 ; i < A.size() ; i++ )
		if ( A[i] != '+')
			B.push_back(A[i] - '1' + 1 );
	sort ( B.begin() , B.end() );

	for ( int i = 0 ; i < B.size() - 1 ; i++ )
		cout << B[i] << "+";
	cout << *(B.end()-1) << endl;
	return 0;
}
