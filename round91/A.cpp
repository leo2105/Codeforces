#include <bits/stdc++.h>
using namespace std;

bool lucky(int N) {
	int aux;
	while( N != 0 ){
		aux = N % 10;
		N /= 10;
		if ( aux != 4 && aux != 7 ) return false;
	}
	return true;
}
int main(){

	int N;
	cin >> N;
	bool flag = false;
	for ( int i = 1 ; i <= N ; i++ )
		if ( lucky(i) && N%i == 0)
			flag = true;

	flag ? cout << "YES" : cout << "NO" ;
	cout  << endl;
	return 0;

}
