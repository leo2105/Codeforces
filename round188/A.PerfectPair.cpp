#include <bits/stdc++.h>
#define ll long long

const ll may = LLONG_MAX;
using namespace std;
int main()
{
	ll x, y, m, aux;
    int cont;
	cin >> x >> y >> m;
    
    if ( max ( x, y ) >=  m ) {
        cout << 0 << endl; return 0;
    }
    
    if ( x > y )
        swap ( x, y );

    if ( y <= 0 ) {
        cout << -1 << endl; return 0;
    }

    ll rpta = 0LL;
    if ( x < 0 ) {
        rpta = (-x) / y;
        x += rpta * y;
    } 

    while ( max ( x, y) < m ) {
        x += y;
        ++rpta;
        if ( x > y ) 
            swap ( x, y ); 
    }

    cout << rpta << endl;
    return 0;   
}
