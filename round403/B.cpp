#include <bits/stdc++.h>
#define ld long double
using namespace std;

const ld eps = 1e-8;
const int N = 6e4+5;

ld P[N], T[N];
int n;

ld f ( ld x ){
    ld may = 0.0 ;
    for ( int i = 0 ; i < n ; i++ )
        may = max( may, abs(P[i]-x)/T[i]);   
    return may;
}

ld TS ( ld left, ld right ) {

    if ( abs(right - left) < eps )
       return f((left + right)/2.0);

   ld leftThird = (2.0*left + right)/3.0;
   ld rightThird = (left + 2.0*right)/3.0;

   if ( f( leftThird ) > f( rightThird ) )
       return TS ( leftThird, right );
   else
       return TS ( left, rightThird );

}

int main(){

    cin >> n;

    for ( int i = 0 ; i < n ; i++ ) cin >> P[i];
    for ( int i = 0 ; i < n ; i++ ) cin >> T[i];



    printf("%.12Lf\n", TS( 0, 2e9+5 ));
    return 0;
}
