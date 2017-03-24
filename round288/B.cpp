#include <bits/stdc++.h>
using namespace std;

int main(){
	string S;
	cin >> S;
	int aux, pos, may = -1, cont, last;
	for ( int i = 0 ; i < S.size() ; i++ ){
		aux = S[i] - '0';
		if ( aux % 2 == 0 )
			may = max(may, aux);
	}
	if ( may == -1){
		cout << may << endl; return 0;
	}

	for ( int i = 0 ; i < S.size() ; i++ ){
		aux = S[i] - '0';
		last = S[S.size()-1] - '0';
		if ( aux % 2 == 0){
			if ( last > aux){
				swap(S[i], S[S.size()-1]); cout << S << endl; return 0;
			}
			else
				cont = i;
		}
	}
	swap(S[cont], S[S.size()-1]);
	cout << S << endl;
	return 0;
}
