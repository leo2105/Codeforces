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
long long cont[1000010];
long long A[1000010];
//vint A;
//vint B;

/*int sumaA(int a, int b)
{
	int sum=0;
	f(i,a,b+1)
		sum+=A[i];
	return sum;
}
*/
/*int sumaCont(int *p,int a, int b)
{
	int sum=0;
	f(i,a,b+1)
		sum+=*(p+i);
	return sum;
}
*/
int main()
{
	long long N,S=0;
	cin>>N;
	
	long long var=0;
	long long resultado=0;
	int aux;
	f(i,0,N)
	{
		cin>>A[i];S+=A[i];

	}
	
	if(S%3==0)
		{
			//rpta = 0;		
			fd(j,N-1,0)
			{
				var += A[j];
				if(var == S/3)
					cont[j]=1;
			}

			fd(i,N-2,0)
				cont[i] += cont[i+1];
			
			var=0;
			f(i,0,N-2)
			{
				var+=A[i];
				if(var == S/3)
					resultado += cont[i+2];
			}
			cout<<resultado<<endl;
		}
	else
		cout<<"0"<<endl;
	
	
	/*f(i,0,N)
		{cin>>aux;A.pb(aux);}
	S=suma(0,N-1);

	f(i,0,N)
		{cin>>aux;A.pb(aux);}
	S=suma(0,N-1);
	f(i,0,N-2)
	{
		if(suma(0,i)==S/3)
		{
				B.pb(i);
				if(suma(0,i+1)!=S/3)
					i=N;
		}
	}

	clr(cont,0);
	if(S%3!=0)
		cout<<0;
	else
	{
		f(j,i+1,N)
			if(suma(j,N-1)==S/3)
				cont[j]=1;
		f(k,0,N)
			sumas[i]
	}
	*/		
}
