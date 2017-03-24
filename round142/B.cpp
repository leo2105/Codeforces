#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e6+5;
bool sieve[N];

vector<int> primes;

void criba(){
	memset ( sieve, true, sizeof sieve);
	sieve[1] = false;
	for( int i = 2 ; i < N ; i++ )
		for ( int j = i+i; j < N ; j+= i)
			sieve[j] = false;
}

int main(){
	int n, j, cont;
	cin >> n;
	ll aux, aux1;
	bool flag = true;
	criba();
	for ( int i = 0 ;  i < n ; i++ ){
		cin >> aux;
		aux1 = sqrt(aux);
		if ( aux1 * aux1 == aux && sieve[aux1] )
				cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}
