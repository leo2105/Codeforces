#include <bits/stdc++.h>
using namespace std;

bool f(string S){
	string A = "";
	for (int i = 0 ;  i < S.size() ; i++ ){
		if ( (S[i] >= 'a' && S[i] <= 'c') || ( S[i] >= 'A' && S[i] <= 'C') )
			A += '2';
		if ( (S[i] >= 'd' && S[i] <= 'f') || ( S[i] >= 'D' && S[i] <= 'F') )
			A += '3';
		if ( S[i] == 'G' || S[i] == 'g' ||   S[i] == 'H' || S[i] == 'h' || S[i] == 'I' || S[i] == 'i')
			A += '4';
		if ( S[i] == 'J' || S[i] == 'j' ||   S[i] == 'K' || S[i] == 'k' || S[i] == 'L' || S[i] == 'l')
			A += '5';
		if ( S[i] == 'M' || S[i] == 'm' ||   S[i] == 'N' || S[i] == 'n' || S[i] == 'O' || S[i] == 'o')
			A += '6';
		if ( S[i] == 'P' || S[i] == 'p' ||   S[i] == 'Q' || S[i] == 'q' || S[i] == 'R' || S[i] == 'r' || S[i] == 'S' || S[i] == 's')
			A += '7';
		if ( S[i] == 'T' || S[i] == 't' ||  S[i] == 'U' || S[i] == 'u' ||  S[i] == 'V' || S[i] == 'v')
			A += '8';
		if ( S[i] == 'W' || S[i] == 'w' ||   S[i] == 'X' || S[i] == 'x' || S[i] == 'Y' || S[i] == 'y' ||  S[i] == 'Z' || S[i] == 'z')
			A += '9';
	}

	for ( int  i = 0 ; i < A.size()/2 ; i++ ) if ( A[i] != A[A.size()-1-i]) return false;	
	return true;
}
int main(){
	int N;
	string S;
	cin >> N;
	while(N--){
		cin >> S;
		if ( f(S) ) puts("YES");
		else puts("NO");
	}
	return 0;
}	
