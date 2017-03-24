#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int time = 240;
	time -= k;
	int cont = 0 ;
	for ( int i = 1; i <= n ; i ++){
		if ( time - i*5 >= 0) {
			cont++;
			time -= i*5;
		}else{
			break;
		}
	}
	cout << cont << endl;
	return 0;

}
