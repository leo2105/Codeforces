#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1005];
int main(){
	int r=0;
	ll N;
	int p1=0;
	cin >> N;
	dp[1] = 2LL, dp[2] = 3LL;	
	if(N == 2LL){ cout<<1<<endl;return 0;}
	for(int i=3;;i++){
		dp[i] = dp[i-1]+dp[i-2];
		if(dp[i] > N){ cout<<(i-1)<<endl ; break; }
	}
	

	return 0;
}
