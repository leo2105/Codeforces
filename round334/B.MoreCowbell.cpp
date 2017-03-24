#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int a;
	vector<int> A;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		A.pb(a);
	}
	long long S=0;
	for(int i=0;i<(n-k+1);i++)
	{
		S+=(A[i]);
	}

	if(A[n-1]>S)
		cout<<A[n-1]<<endl;
	else
		cout<<S<<endl;
	return 0;
}