#include <iostream>
#include <vector>
#define ll long long 
using namespace std;
const int N = 1e6;
int B[N];
vector<int> A;

int main(){
	int n,x,a;
	ll cont = 0LL;
	cin >> n >> x;
	for ( int i = 0 ; i < n ; i++ )
		cin >> a , A.push_back(a) , B[a]++;
	int aux;
	for ( int i = 0 ; i < n ; i++ ){
		aux = B[A[i]^x];

		if ( aux )
			if ( A[i] == (A[i]^x) )
				cont += (ll)(aux-1) ; 	
			else
				cont += (ll)(aux);
		B[A[i]]--;
	}
	cout << (cont) << endl;
	return 0;
}
