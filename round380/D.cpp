#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,a,b,k;
	string S;
	cin>>n>>a>>b>>k;
	cin>>S;	
	vector<int> B;
	
	int cont = 0;
	for(int i = 0 ; i < S.size() ; i++){
		if(S[i] == '1') cont = 0;
		else cont++;
		
		if(cont == b){
			cont = 0;
			B.push_back(i+1);
		}
	}
	int l = B.size();
	l -= (a-1);
	cout<< l <<endl;
	for(int i = 0 ; i < l ; i++)
		cout << B[i] << " ";
	cout<<endl;
		
	return 0;
}
