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

vint B,A,C;
int a;

int main()
{
	int n;
	cin>>n;
	f(i,0,n)
		{cin>>a;A.pb(a);}
	B=A;
	sort(A.begin(),A.end());

	C.pb(A[0]);
	int aux=0;
	f(i,1,n)
	{
		if(A[i]!=C[aux])
		{
			C.pb(A[i]);aux++;
		}
	}

	/*f(i,0,C.size())
		cout<<C[i]<<" ";
	cout<<endl;*/

	f(i,0,C,size())
	{
		
	}

	return 0; 
}