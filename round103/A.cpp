#include <bits/stdc++.h>
using namespace std;

int A[105];
int main(){
	int n;
	cin >> n;
	int may=-1,men=105,idm,idM;
	
	for(int i=0;i<n;i++){	cin >> A[i];
		if ( A[i] > may) may = A[i], idM = i;
		if ( A[i] <= men) men = A[i], idm = i;
	}
	
	if ( may == men) cout << 0 << endl;
	else {
		if ( idM < idm ) cout << idM + n - idm - 1 << endl;
		else cout << idM + n - idm - 2  << endl;
	}
	
	return 0;
}
