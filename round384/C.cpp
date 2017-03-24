#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e4+1e3;

int main(){
	int n;
	ll a;
	int b,c,d,aux;
	cin >> n;	
	for ( int x = 1 ; x  <= N ; x++ ){
		for ( int y = x + 1 ; y <= N ; y++ ){
			if ( x != y ){
				a = (ll)(n * x) * (ll)y , b = 2 * x * y , c = n * x , d = n * y;
				aux = b-c-d;
				if ( aux > 0 && a % aux == 0LL && (a / aux) >= 1LL && x != (a/aux) && y != (a/aux) && (a/aux) <= (ll)1e9)
					{cout << x << " " << y << " " << (a/(aux)) << endl; return 0;} 
			}
		}
	}
	cout << -1 << endl;
	return 0;
}	
