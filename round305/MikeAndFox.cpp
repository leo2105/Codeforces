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
string A;
int k;
bool palindrome(int i,int j)
{
	
		if(A[i]!=A[j] && i<j)
			return false;
		else
			if(i>=j)
				return true;
			else
				return palindrome(++i,--j);

}
		
int main()
{
	cin>>A;
	cin>>k;
	int rpta;
	f(i,0,A.size())
		f(j,i+1,A.size())
			if(palindrome(i,j))
				rpta++;
	cout<<rpta;
	if(rpta!=k)
		cout<<"NO";
	else
		cout<<"YES";
	return 0;
}
