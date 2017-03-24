#include <bits/stdc++.h>
using namespace std;

struct nodo{
	int pos,ene;
};

vector<nodo> G[30];

int C,T,L;

int backtracking( int cant , int cat , int clase , int pos_act , int pos_ant){
	
	if ( cat == C ) return L - pos_act;
	
	int rpta = 1000000 , e_sig , p_sig ;

	for ( int i = 0 ; i < T ; i++ )	{
		if ( cat == 0 ) 
			p_sig = pos_act; 
		else 
			p_sig = abs( pos_ant - pos_act );
	
		 e_sig = G[cat][clase].ene;

		rpta = min ( rpta , backtracking( cant + e_sig + p_sig , cat + 1 , i , G[cat][i].pos , pos_act ));
	}
	return rpta ; 
}

int main(){
	int Z,p,e,rpta;
	nodo x;
	scanf("%d",&Z);
	while ( Z-- ){
		for ( int i = 0 ; i < 30 ; i++) G[i].clear();	
		scanf( "%d %d %d",&C,&T,&L);
		for ( int i = 0 ; i < C; i++ ){
			for ( int j = 0 ; j < T ; j++ ){
				scanf("%d %d",&p,&e);
				x.pos  = p , x.ene = e;
				G[i].push_back(x);
			}
		}		

		rpta = 10000000 ;

		for ( int  i = 0 ; i < T ; i++ ) 
			rpta = min ( rpta , backtracking( G[0][i].pos + G[0][i].ene , 0 , i , G[0][i].pos , -1 ));
 
		printf ( "%d\n" , rpta );
			 
	}
	return 0;
}
