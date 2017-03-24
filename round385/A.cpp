#include <bits/stdc++.h>
using namespace std;

string S;

bool comp(int i,int j){
	for(int k=i;k<j;k++){
		if(S[k-i] != S[k])
			return false;
	}
	return true;
	
}
int main(){
	
	cin >> S;
	int n = S.size();
	for(int i=0;i<n;i++){
		S+=S[i];
	}
	int cont = 0 ;
	for(int i=1;i<n;i++){
		if(!comp(i,i+n)) cont++;
		else break;
	}
	cout << cont+1 << endl;
	return 0;

}
