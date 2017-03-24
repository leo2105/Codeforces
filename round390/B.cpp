#include<bits/stdc++.h>
using namespace std;

int dx[8] = {-1,-1,0,+1,+1,+1,0,-1};
int dy[8] = {0,+1,+1,+1,0,-1,-1,-1};

char A[4][4];

bool isok(int x , int y){
	if ( x>=0 && x < 4 && y>=0 && y < 4)
		return true;
	return false;
}

bool function ( int i , int j ){
	for ( int k = 0 ; k < 8 ; k++ ){
		if ( isok(i+dy[k],j+dx[k]) && isok(i+2*dy[k],j+2*dx[k]) && ((A[i+dy[k]][j+dx[k]] == '.' && A[i+2*dy[k]][j+2*dx[k]] == 'x') || (A[i+dy[k]][j+dx[k]] == 'x' && A[i+2*dy[k]][j+2*dx[k]] == '.') ) )
			return true;	
	}
	return false;
}
int main(){
	
	for ( int i = 0 ;  i < 4 ; i++ ){
		for ( int  j  = 0 ;  j < 4; j++ ){
			cin >> A[i][j];
		}
	} 

	for ( int i = 0 ; i < 4 ; i++ ){
		for ( int j = 0 ; j < 4; j++ ){
			if ( A[i][j] == 'x' &&  function(i,j) ){
				puts("YES"); return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
