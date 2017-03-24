#include <iostream>
using namespace std;

const int N = 105;

int A[N] ;

int main(){
	int n , rpta = N , iter , aux;

	cin >> n ; 
	for ( int i = 1 ; i <= n ; i++ ) cin >> A[i];
	
	
	for ( int i = 1 ; i <= n ; i++ ){
		iter = 0 ;
		aux = A[i] ;
		while ( iter < N  ){
			if ( aux == i ) break;
			aux = A[aux];
			iter ++ ;
		}
		cout << iter << endl ; 
		if ( iter != N && iter != 0) rpta = min ( iter , rpta );
	}
	if ( rpta == N ) cout << -1 << endl;
	else cout << ( rpta ) << endl;
	return 0;
}
	
