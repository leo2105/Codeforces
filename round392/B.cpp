#include <bits/stdc++.h>
using namespace std;

char color[4] = {'R','B','Y','G'};
string S;
vector<int> R,B,Y,G;
int cont[4];
int aux;

int main(){
	cin >> S;
	for ( int  i = 0 ; i < S.size() ; i++ ){
		if ( S[i] != '!'){
			aux  = i%4;
			for ( int j = aux ; j < S.size() ; j+= 4){
				if (S[j] == '!'){
					if (S[i] == 'R') {cont[0]++, S[j] = 'R';}
					if (S[i] == 'B') {cont[1]++; S[j] = 'B';}
					if (S[i] == 'Y') {cont[2]++; S[j] = 'Y';}
					if (S[i] == 'G') {cont[3]++; S[j] = 'G';}
				}
					
			}
		}
		
	}
	for ( int i = 0 ; i < 4 ; i++ ){
		if( S[0] != color[i] && S[1] != color[i] && S[2] != color[i] && S[3] != color[i]){
			for ( int k = 0 ; k < 4 ; k++ ){
				if (S[k] == '!'){
					S[k] = color[i];cont[i] += (S.size()/4 + (S.size()%4!=0));break;
				}
			}
		}
	}
	
	for ( int i = 0 ; i < 4 ; i++ ){
		cout << cont[i] << " ";
	}
	cout << endl;
	

	
	
	
	
		

	return 0;
}
