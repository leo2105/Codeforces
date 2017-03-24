#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int L,R,U,D;

int main(){
	string S;
	cin>>S;
	if(S.size()%2!=0){ cout<<-1<<endl; return 0;}
	for(int i=0; i<S.size(); i++){
		if(S[i] == 'L') L++;
		if(S[i] == 'R') R++;
		if(S[i] == 'U') U++;
		if(S[i] == 'D') D++;
	}	
	
	int rpta = (abs(L-R) + abs(U-D))/2;
	cout<<rpta<<endl;
	return 0;	
}

