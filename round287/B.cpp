#include <bits/stdc++.h>
#define ld long double
#define cua(x) ((x)*(x))
using namespace std;

int main(){
	ld r,x,y,_x,_y;
	cin >> r >> x >> y >> _x >> _y;
	ld aux;
	aux = sqrt(cua(x - _x) + cua( y - _y));
	int rpta;
	rpta = aux / (2.0*r);
	if ( rpta * 2.0 * r < aux ) rpta++;
	cout << rpta << endl;
	return 0;
}
