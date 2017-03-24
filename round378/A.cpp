#include <bits/stdc++.h>
using namespace std;

int main(){
	string A;
	cin >> A;
	int rpta = 0;
	int pos = -1;
	for(int i=0;i<A.size();i++){
		if (A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U'  || A[i] == 'Y'){
			rpta  = max ( rpta , i-pos );
			pos = i;
		}
	}
	rpta  = max ( rpta , (int)A.size() - pos);
	
	cout << rpta  << endl;
	return 0;
}	
