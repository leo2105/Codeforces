#include <bits/stdc++.h>
#define f(i,x,y) for (int i = x; i < y; i++)
#define fd(i,x,y) for(int i = x; i>= y; i--)
#define FOR(it,A) for(typeof A.begin() it = A.begin(); it!=A.end(); it++)
#define vint vector<int>
#define ll long long
#define clr(A,x) memset(A, x, sizeof A)
#define pb push_back
#define pii pair<int,int>
#define mp make_pair
#define fst first
#define snd second
#define ones(x) __builtin_popcount(x)
#define eps (1e-9)
#define NOsync ios_base::sync_with_stdio(0)
#define oo (1<<30)
#define OO (1LL<<60)

using namespace std;
vint A;
vint id;
int N;
int M;

bool compare(int i,int j){
	return(i<j);
}
/*
void printA()
{
	f(i,0,N)
		cout<<A[i];
	cout<<endl;
}
*/
void printID()
{
	f(i,0,N)
		cout<<id[i];
	cout<<endl;
}

int indice(int x)
{
	f(i,0,N)
		if(A[i]==x)
			return i;
	return 0;
}
void unite(int p,int q)
{
	int pid = id[p];
	f(i,0,N)
		if(id[i]==pid)
			id[i]=id[q];
}

void QuickFind()
{
	
	f(i,0,N) id.push_back(i);
}

int main()
{
	//srand(time(NULL));
	int a,b,ind1,ind2;
	cin>>N;
	cin>>M;
	f(i,0,N)
		A.pb(i+1);
	QuickFind();
	//printA();
	//printID();
	f(i,0,M)
	{
		cin>>a;
		cin>>b;
 		unite(indice(a),indice(b));
	}

	sort(id.begin(),id.end(),compare);
	
	int cont=1;
	int i,j;
	for(j=0,i=0;i<N;i++) 
	{
		if(id[j]!=id[i])
			cont++;
		j=i;
	}	
	long long int rpta = pow(2,N-cont);
	cout<<rpta;
	
	return 0;
}
