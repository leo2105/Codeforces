#include <bits/stdc++.h>
using namespace std;

int main(){	
	double a,b,c;
	cin>>a>>b>>c;
	double x1 = (-1.0*b + sqrt(b*b - 4.0 * a * c))/(2.0*a);
	double x2 = (-1.0*b - sqrt(b*b - 4.0 * a * c))/(2.0*a);
		
	if(x1 > x2) cout<<fixed<<setprecision(6)<<x1<<endl<<x2<<endl;
	else cout<<fixed<<setprecision(6)<<x2<<endl<<x1<<endl;
	return 0;
}
