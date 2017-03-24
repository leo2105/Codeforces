#include <bits/stdc++.h>
#define INF (1<<30)
#define _INF (1<<31)
using namespace std;

int main(){
	int n;
	cin >> n;
	int rat, div;
	int lo,hi;
	cin >> rat >> div;

	if ( div == 2 ) lo = _INF, hi = 1899 + rat;
	if ( div == 1 ) lo = 1900 + rat , hi = INF;
	
	for ( int i = 1 ; i < n ; i++ ) {
		cin >> rat >> div;
		if ( div == 1){
			if ( hi >= 1900 ) {
				lo = max ( lo , 1900 ); 
			}else{
				puts("Impossible");
				return 0;
			}
		}
		
		if ( div == 2 ) {
			if ( lo < 1900 ) {
				hi = min ( hi , 1899 );
			}else{
				puts("Impossible");
				return 0;
			}
		}	 
		if ( hi != INF ) hi += rat;
		if ( lo != _INF) lo += rat;
	}
	if ( hi == INF) puts("Infinity");
	else cout << hi << endl;

	return 0;
}
