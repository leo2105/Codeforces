#include <bits/stdc++.h>
#define f(i,x,y) for(int i=x;i<y;i++) 
using namespace std;

std::vector<int> A;
int min_distancia(int a,int b)
{
	int r=abs(a-b);
	if(r<=5)
		return r;
	else
		return 10-r;
}
int main()
{
	int min=0;
	int n,rpta;
	cin>>n;
	string A,B;
	cin>>A>>B;
	char a,b;
	int aux1,aux2;
	f(i,0,n)	
	{
		a = A[i];
		b = B[i];
		aux1 = a - 48;
		aux2 = b - 48;
		rpta=min_distancia(aux1,aux2);
		min+=rpta;
	}
	cout<<min;
	return 0;
}