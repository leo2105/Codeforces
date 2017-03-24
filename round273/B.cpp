#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f ( ll n){
	return (n * (n-1LL) / 2 );
}

int main(){

	ll n,m,aux,a,b;
	cin >> n >> m;
	ll may, men;

	may = (n-m) * (n-m+1LL) / 2;

	if ( n%m == 0LL ){
		men = m * (n/m) * (n/m-1LL) / 2;
	}else{
		aux = n/m;
		b = n % m;
		a = m - b;
		men = a * f(aux) + b * f((n - a*aux)/b);
				
	}
	cout << men << " " << may << endl;
	return 0;
}
