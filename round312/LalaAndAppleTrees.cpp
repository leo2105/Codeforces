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
//#define N 1005

using namespace std;

struct nodo{
	int x;
	int a;
};

bool operator <(nodo A, nodo B){
	return A.x < B.x;
}

vector<nodo> P;
vector<nodo> N;

int main()
{
	int n,x,a,flag,sum=0;
	bool carry = true;
	cin>>n;
	f(i,0,n)
	{
		nodo aux;
		cin>>x>>a;
		aux.x = x;
		aux.a = a;
		if(x<0)
			N.pb(aux);
		else
			P.pb(aux);
	}

	sort(P.begin(),P.end());
	sort(N.begin(),N.end());

	if(P.size() > N.size())
		flag = 1;
	else
		flag = -1;

	while( carry )
	{

		if(flag == 1)
		{
			sum = sum + P[0].a;
			P.erase(P.begin());
			flag=-1;
			if(N.empty())
				carry = false;
		}
		else
		{	
			sum = sum + N[N.size()-1].a;
			N.erase(N.begin() + N.size() - 1);
			flag=1;
			if(P.empty())
				carry = false;
		}

	}
	cout<<sum<<endl;
	return 0;
}