#include <bits/stdc++.h>
using namespace std;
const double PI = 3.1415926535;
int main(){
	cout << PI << endl;
	int n;
	string S;
	cin >> n;
	double ang1,_ang1,ang2,_ang2,L,r=10000.0,x,y,z;
	ang1 = 0, ang2 = 0;
	x = y = 0.0;
	z = 10000.0;
	cout << x <<" " << y << " " << z << endl;
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> L >> S;
		// ang1 gamma	
		// ang2 theta
		if ( S == "North"){
			_ang1 = L/r; 					
			x = r * cos( ang2 + _ang2 ) * cos(ang1 - _ang1);
			y = r * cos( ang2 + _ang2 ) * sin(ang1 - _ang1);
			z = r * sin( ang1 + _ang1 );		 			
			ang1 -= _ang1;
		}	
		if ( S == "South"){
			_ang1 = L / r;
			x = r * cos( ang1 ) * cos ( ang1 + _ang1 );
			y = r * cos( ang1 ) * sin ( ang1 + _ang1 );
			z = r * sin( ang1 + _ang1 );
			ang1 += _ang1;
		}		
		if ( S == "East"){
			_ang2 = L / r;
			x = r * cos( ang1 + _ang1 ) * cos ( ang1 );
			y = r * cos( ang1 + _ang1 ) * sin ( ang1 );
			z = r * sin( ang1 );
			ang2 += _ang2;
		}
		if ( S == "West"){
			_ang2 = L / r;
			x = r * cos( ang2 - _ang2 ) * cos ( ang1 );
			y = r * cos( ang2 - _ang2 ) * sin ( ang1 );
			z = r * sin( ang1 );
			ang2 -= _ang2;
		}	
		cout << (ang1*180.0/PI) << " " << (ang2*180.0/PI) << endl;	
		cout << x << " " << y << " " << z << endl; 		
	}	
	return 0;

}
