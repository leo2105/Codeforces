#include <bits/stdc++.h>
using namespace std;

char A[505][505];
int n,m;

bool rectangle (){
	int cont = 0, a, b ;
	bool flag = false;
	for ( int i = 0 ; i < n ; i++){
		for ( int j = 0 ; j < m ; j++){
			if (A[i][j] == 'X') {
				cont ++ ;
				if(flag == false){
					a = i, b = j;
					flag = true;
				}
			}
			
		}
	}	
	int contx = 0, conty = 0;
	for ( int i = a ; i < n ; i++ ){
		if ( A[i][b] == 'X') contx++;
	}
	for ( int i = b; i < m ; i++){
		if ( A[a][i] == 'X') conty++;
	}
	
	int aux = 0;
	flag = false;
	for ( int i = a; i < a + contx ; i++){
		for ( int j = b ; j < b+conty ; j++){
			if (A[i][j] == '.'){
				flag = true;
			}
				
		}
	}
	if (contx * conty == cont && flag == false) return true;
	return false;
	//return true;
	//cout << aux << endl;
	//cout << cont << endl;
	//if ( aux != cont) return false;
	
	/*if ( a >= contx ){
		if ( b >= conty || n > b + 2*conty)
			return true;
	}
	if ( m > a+2*contx ){
		if ( b >= conty || n > b + 2*conty)
			return true;
	}*/
	// return false;
	//return true;
}

int main(){
	
	cin >> n >> m;
	
	for ( int i = 0 ;  i < n ; i++){
		for ( int j = 0 ; j < m  ; j++){
			cin >> A[i][j]; 
		}	
	}

	if ( rectangle () ){
		cout << "YES" << endl;

	}else{
		cout << "NO" << endl;
	}	
	return 0;
}
