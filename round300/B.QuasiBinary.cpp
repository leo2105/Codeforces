#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <cstdlib>
#include <sstream>
using namespace std;
string temp1;
vector<int> A;



string IntToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int QuasiBinario(int x)
{
	int temp=x+10000000;
	int z=0;
	string temp1 = IntToString(temp);
	for(int j=0;j<8;j++)
		if(temp1[j]=='0' || temp1[j]=='1')
			z++;
	if(z==8)
		return true;
	else
		return false;
}

int main()
{
	int x;
	int i;
	cin>>x
	for(i=10;i<=11 && i<=x;i++)
		if(QuasiBinario(i))
		{
			A.push_back(i);
		}
	
	for(i=100;i<=111 && i<=x;i++)
		if(QuasiBinario(i))
		{
			A.push_back(i);
		}

	for(i=1000;i<=1111 && i<=x;i++)
		if(QuasiBinario(i))
		{
			A.push_back(i);
		}

	for(i=10000;i<=11111 && i<=x;i++)
		if(QuasiBinario(i))
		{
			A.push_back(i);
		}

	for(i=100000;i<=111111 && i<=x;i++)
		if(QuasiBinario(i))
		{
			A.push_back(i);
		}
	if(i>111111)
		A.push_back(1000000);
	/*for(i=0;i<A.size();i++)
		cout<<A[i]<<" ";
	*/
	n=A.size();
	for(int q=n-1;q>=)
		return 0;
}