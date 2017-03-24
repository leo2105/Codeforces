#include <bits/stdc++.h>
using namespace std;

const int N=10;
string A[N];
bool vis[N];
int rpta[100000][N];
int rpta_n = 0;


int trans(string A){
	int diez = 1;
	int sum = 0;
	for(int i = (int)A.size() - 1; i >= 0; i--){
		sum += (A[i]-'0')*diez; 
		diez *= 10;
	}
	return sum;
}

void f(string p, string p_n, int lvl, int lvl_n, int j){
	if( lvl == lvl_n ){
		rpta[rpta_n++][j] = trans(p);
		return;
	}
	
	for(int i = 0; i < lvl_n; i++){
		if(vis[i] == false){
			vis[i] = true;
			f(p+p_n[i],p_n,lvl+1,lvl_n,j);
			vis[i] = false;		
		}	
	}	
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0; i<n; i++)
		cin>>A[i];
	for(int i=0; i < n; i++){
		rpta_n = 0;
		for(int j=0;j<N;j++) vis[j] = false;
		f("",A[i],0,k,i);
	}
	
	int r = INT_MAX, may, men;	
	for(int i = 0; i < rpta_n; i++){
		may = -1;
		men = INT_MAX;
		for(int j = 0; j < n; j++){
			if(rpta[i][j] > may) may = rpta[i][j];
			if(rpta[i][j] < men) men = rpta[i][j];
		}
		if((may - men) < r) r = (may - men);
	//	cout<<may<<" "<<men<<" "<<r<<" "<<(may-men)<<endl;
	}
	cout<<r<<endl;
	return 0;
}
