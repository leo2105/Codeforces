#include <bits/stdc++.h>
using namespace std;
int main(){

	int n,k,a,sum = 0;
	vector<int> B;
	cin>>n>>k;
	B.push_back(0);
	for(int i=0 ; i < n ; i++){
		cin>>a;
		sum += a;
		B.push_back(sum);
	}

	int men = (1<<30);
	int rpta=0;
	for(int i=0;i<n-k+1;i++){
		if(B[i+k]-B[i] < men){
			rpta = i;
			men = B[i+k]-B[i];
		}
	}

	cout<<(rpta+1)<<endl;
	return 0;
}
