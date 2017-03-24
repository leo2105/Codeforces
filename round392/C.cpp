#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ll n,m,k,x,y;
	cin >> n >> m >> k >> x >> y;
	ll var = k / m;
	ll aux = (var - 1LL) * 2LL;
	ll aux2 = var / aux ; // menor
	ll aux3 = var / aux + 1LL; // mayor
	ll aux4 = var%aux;
	//cout << aux4 << endl;
	
	if ( aux4 != 1LL)
		aux3 *= 2LL;
	aux2 += 1LL;
	cout << aux3 << endl << aux2 << endl;
	
	return 0;
}
