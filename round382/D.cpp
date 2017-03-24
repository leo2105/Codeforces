#include <bits/stdc++.h>
using namespace std;

bool primo(int N){
	for(int i=2;i*i<=N;i++){
		if(N%i==0) return false;
	}
	return true;
}
int main(){
	int N;
	cin>>N;
	if(N&1){
		if(primo(N))puts("1");
		else{
			if(primo(N-2))puts("2");
			else puts("3"); 	
		}		
	}else{
		if(N==2) puts("1");
		else	puts("2");
	}


	return 0;
}
