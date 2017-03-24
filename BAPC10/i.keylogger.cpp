#include <bits/stdc++.h>
#define oo (1<<30)
using namespace std;

int L[1000005];
int R[1000005];
char V[1000005];

char cad[1000005];
vector<char> letras,var;
int tam;

int erase(int pos){
	if(R[pos] == oo){
		R[L[pos]] = oo;
	}
	else{
		L[R[pos]] = L[pos];
		R[L[pos]] = R[pos];
	}
	
	return L[pos];
}

int push(int pos,int next){
	int aux;
	if(R[pos] == oo){
		R[pos] = next;
		R[next] = oo;
		L[next] = pos;
	}
	else{
		aux = R[pos];
		R[pos] = next;
		R[next] = aux;
		L[next] = pos;
		L[aux] = next;
		
	}
	return next;
}

int main(){
	int N,T,pos,aux;
	char c;
	scanf("%d",&T);
	while(T--){
		memset(L,0,sizeof L);
		memset(R,0,sizeof R);
		scanf("%s",cad);	
		N = strlen(cad);
		for(int i=N;i>=1;--i)
			cad[i] = cad[i-1];
		cad[0] = '&';
		L[0] = 0;
		R[0] = oo;
		pos = 0;
				
		for(int i=1;i<=N;i++){
			if(cad[i] != '<' && cad[i] != '>' && cad[i] != '-' ){
				pos = push(pos,i);
				//tam++;
			}
			else{
				if(cad[i] == '<'){
					pos = L[pos];				
				}
				if(cad[i] == '>'){
					if(R[pos] != oo)
						pos = R[pos];	
				}
				if(cad[i] == '-'){
					pos = erase(pos);
				} 				
			}	
		}	
		aux = R[0];	
		while(aux != oo ){
			printf("%c",cad[aux]);
			aux = R[aux];
		}
		printf("\n");
		
	}	
	return 0;
}
