#include <bits/stdc++.h>
using namespace std;

const int INF = 111111;
int A[55][55];
int dp[55][8];
int n,m;

int f( int y, int mask){
	if ( y == n )
		if (mask == 7 ) return 0;
		else return INF;
	if ( dp[y][mask] != -1) return dp[y][mask];

	int rpta = INF;
	for ( int i = 0 ; i < m ; i++ )
			rpta = min( rpta, min(i, m-i) +  f(y+1, (mask | (1<<A[y][i])) ) );
	return dp[y][mask] = rpta;
}

void bottom_up(){
	for ( int i = 0 ; i < n ; i++ ){
		for ( int j = 0 ; j < m ; j++ ){
			for ( int k = 1 ; k < 8; k++){
				dp[i][k] = min( dp[i][k], (k | (1<<A[i][j])));
			}
		}
	}
}
int main(){
	
	char a;
	string S;
	cin >> n >> m;
	memset ( dp, -1, sizeof dp);
	
	for ( int i = 0 ; i < n ; i++ ){
		cin >> S;
		for ( int j = 0 ; j < m ; j++ ){
			a = S[j];
			if ( a >= '0' && a <= '9' ) A[i][j] = 0;
			else if ( a >= 'a' && a <= 'z' ) A[i][j] = 1;
			else A[i][j] = 2;
		}
	}
			
	cout << f (0, 0) << endl;			
	/*for ( int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	
	bottom_up();
	for ( int i = 0 ; i < n ; i++ ){
		for ( int j = 0 ; j < 8 ; j++ )
			cout << dp[i][j] << "\t"; 
		cout << endl;
	}*/		
	return 0;
}
