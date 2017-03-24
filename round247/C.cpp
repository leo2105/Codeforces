#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;
int n,k,d;
int dp[105][2];


int tree ( int sum , bool flag ){
	
	if ( sum > n ) return 0;
	if ( sum == n) 	return flag;
	if ( dp[sum][flag] != -1 ) return dp[sum][flag];	
	
	int cont = 0;
	for ( int i = 1 ; i <= k ; i++ )
		cont = (cont + (  i >= d ? tree( sum + i , true ) : tree( sum + i , flag ) )) % MOD;
	return dp[sum][flag] = cont;
}	

int main(){
	cin>>n>>k>>d;
	memset(dp , -1 , sizeof dp);
	cout<<tree( 0 , false)<<endl;
	
	return 0;
}	
