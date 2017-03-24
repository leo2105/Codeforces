#include <iostream>
using namespace std;

int main(){

	int n;
	long long k;
	cin >> n >> k ;
	for ( int i = 0 ; i <= n ; i++){
		if ( k - (1LL<<(i-1) >= 0) && (k - (1LL<<i)) % (1LL<<(i+1)) == 0 ) 
			{cout << (i+1) << endl;break;}
	}

	return 0;
}
