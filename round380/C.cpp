#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;

struct car{
	int c,v;
};

vector<car> A;
vector<car> B;
vector<int> g;
int k; // Cantidad de gas station

int func (int gas){
	int d, t = 0, aux;
	for( int i = 0 ; i < k ; i++ ){
		d = g[i+1] - g[i];
		if ( d * 2 >= gas && gas >= d ){
			aux = gas - d;
			t += ( aux + 2*(d-aux) );
		}else
			return -1;
	}
	return t;
}

// key es el tiempo
int BS(int low , int high, int t ){
	int mid;
	while(low <= mid){
		mid =  low + (high-low)/2;
		if( func(B[mid].v) == t ) return mid;
		if( func(B[mid].v) < t ) high = mid - 1;
		else low = mid + 1;
	}	
	return mid;
}

bool f(car a, car b){
	if( a.v < b.v ) return true;
	else if( a.v == b.v && a.c < b.c  ) return true;
	return false;
}
int main(){

		int n,s,t,aux;
	scanf("%d %d %d %d",&n,&k,&s,&t);

	for ( int i = 0 ; i < n ; i++ ){ 
		car x;
		scanf("%d %d",&x.c,&x.v);
		A.push_back(x);
	}

	g.push_back(0);
	for ( int i = 0 ; i < k ; i++ ) {
		scanf("%d",&aux);
		g.push_back(aux);
	}

	sort(A.begin(),A.end(),f);
		
	//for(int i = 0 ; i < A.size() ; i++ ) 
	//	printf("%d %d\n",A[i].v,A[i].c);
	
	for(int i = A.size()-1 ; i > 0 ; i--){
		if(A[i].v != A[i-1].v ) B.push_back(A[i]);
	}
	B.push_back(A[0]);
	int aux2 = BS(0, B.size(), t);
	printf("hola1\n");
	if( func(B[aux2].v) > t ) aux2--;
	printf("%d\n",B[aux2].c);
	return 0;
}
