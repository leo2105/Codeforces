#include <bits/stdc++.h>
using namespace std;

/*
bool cond ( int x ,int y){
	if ( ) 
}*/
int main(){
	int x1,x2,x3,y1,y2,y3,x4,y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	cout << 3 << endl;
	
	/*for ( int x = -5000 ; x < 5000; x++){
		for ( int  y = -5000; y < 5000 ; y++){
			if ( cond(x,y)){
				cout << x << " " << y << endl; 
			}
		}
	} */
	
	x4 =  (x2 + (x3-x1)) ,  y4 = (y2 + (y3-y1));
	cout << x4 << " " <<y4 << endl;
	x4 =  (x2 + (x1-x3)) ,  y4 = (y2 + (y1-y3));
	cout << x4 << " "<<y4 << endl;
	x4 =  (x1 + (x3-x2)) ,  y4 = (y1 + (y3-y2));
	cout << x4 << " "<<y4 << endl;
	
	

	
	return 0;
}
