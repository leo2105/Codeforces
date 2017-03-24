#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
	string S;
	cin>>n>>k;
	cin>>S;
	int I,F;
	for(int i = 0 ; i < S.size() ; ++i){
		if(S[i] == 'G') I = i;
		if(S[i] == 'T') F = i; 
	}
	bool flag=true;
	if(abs(F-I)%k == 0){

		if(I < F){
			
			for(int i=I ; i<=F;i+=k){
				if(S[i]=='#'){flag = false;break;} 
			}
		}else{
			for(int i=F; i<=I; i+=k){	
				if(S[i]=='#'){flag = false;break;}
			}
		}
	}
	else{
		flag = false;
	}
	if(flag)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
