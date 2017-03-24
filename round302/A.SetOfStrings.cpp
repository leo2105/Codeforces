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

string q;
int k;
int ABC[26];
vector<string> S[k];

bool verificar(char x){
	f(i,0,26)
		if(ABC[i])

}

int main(){

	f(i,0,26)
		ABC[i]=0;
	cin>>k;
	cin>>q;
	int N=q.size();
	if(k>N)
		cout<<"NO";
	else
		f(i,0,k) int a=N/k;

	return 0;
}
