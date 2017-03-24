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
#define N 1005

using namespace std;
char ABC[26];
int main()
{
	f(i,0,26)
		ABC[i]=i+97;
	string A;
	int n,cont=0;


	cin>>A;
	n = A.size();

	f(i,0,26)
		f(j,0,n)
			if(ABC[i]==A[j])
				cont++;
	int rpta = (n+1) * 26 - cont;
	cout<<rpta<<endl; 

	return 0;
}