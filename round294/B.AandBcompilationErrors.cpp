#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	long long e;
	long long a=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>e;
		a+=e;
	}
	long long b=a;
	long long c;
	for(int i=0;i<n-1;i++)
	{
		cin>>c;b=b-c;
	}
	cout<<b<<endl;
	for(int i=0;i<n-2;i++)
	{
		cin>>c;a=a-c;
	}
	a=a-b;
	cout<<a;
	return 0;
}	