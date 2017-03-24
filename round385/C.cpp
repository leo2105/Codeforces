#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
const int M = 1e5+5;

vector<int> G[N];
vector<int> C;

bool vis[N];
bool visaux[N];
int cantComp[N];

// cant componentes
int dfs(int source){
	if ( vis[source] ==  true ) return 0;
	vis[source] = true;
	int count = 1;
	for ( int i = 0 ; i < G[source].size() ; i++ ){
		count += dfs(G[source][i]);
	}
	return count;
}

// todos true
void dfs2( int source ) {
	if ( vis[source] == false ){
		vis[source] = true;
		for ( int i = 0 ; i < G[source].size() ; i++ ) 
			dfs(G[source][i]);
	}
}

// cant aristas
int dfs3 ( int source ) {
	if ( visaux[source] ==  true ) return 0;
	visaux[source] = true;
	int sum = G[source].size();
	for ( int i = 0 ; i < G[source].size() ; i++ ) {
		sum += dfs3(G[source][i]);
	}
	return sum; 
} 
int main(){
	int n,m,k,u,v,c,rpta,id,aux,cont = 0;
	cin >> n >> m >> k;
	memset ( vis , false , sizeof vis );
	memset ( visaux , false , sizeof visaux );
	for ( int i = 0 ; i < k ; i++ ){
		cin >> c ;C.push_back(c);
		//visC[c] = true;
	}
	for ( int i = 0 ; i < m ; i++ ) {
		cin >> u >> v;
		G[u].push_back(v) , G[v].push_back(u);
	}

	for ( int i = 0 ; i < C.size() ; i++) {
		memset ( vis , false , sizeof vis);
		cantComp[C[i]] = dfs(C[i]);
	}
	
	int may = -1;
	for ( int i = 0 ; i < C.size() ; i++ ) 
		if ( cantComp[C[i]] > may ) 
			may = cantComp[C[i]], id = C[i] ;
	
	// cout << "id es: "<<  id << endl;	
	memset ( vis, false, sizeof vis );

	for ( int i = 0 ; i < C.size() ; i++ )
		if ( id != C[i])
			dfs2(C[i]); 
	
	/*for ( int i = 0 ; i < 10 ; i++ ) {
		cout << vis[i] << " ";
	}
	cout << endl;*/

	for ( int i = 0 ; i < N ; i++ ) 
		visaux[i] = vis[i];

	int cantArist = 0;
	for ( int i = 1 ; i <= n ; i++ ) {
		if ( visaux[i] == false )
			cantArist += dfs3(i);
	}
	cantArist /= 2;

	for ( int i = 1 ; i <= n ; i++ ) {
		if ( vis[i] == false)
			cont++;
	}
		
	rpta = (cont*(cont-1)) / 2 - cantArist ;
	//cout << cont << endl;
	//cout << cantArist << endl;
	cout << rpta << endl;
	
	
	return 0;
}
