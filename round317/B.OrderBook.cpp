#include <iostream>
#include <map>
using namespace std;

map<int,int> S,B;

int main()
{
	int n,s;
	char c;
	cin>>n>>s;
	int p,q;

	std::map<int,int>::iterator it1 = B.begin();
	std::map<int,int>::iterator it2 = S.begin(); 
	std::map<int,int>::iterator it3; 
	std::map<int,int>::iterator it4;
	int i;
	int j=0,k=0;
	for(i=0;i<n;i++)
	{
		cin>>c>>p>>q;

		if(c == 'B')
		{
			it3 = B.find(p);
			if( it3 == B.end() )
			{	
				B.insert(it1,std::pair<int,int>(p,q));
				it1++;
			}
			else
			{
				B[p]+=q;
			}	
		}
		else
		{
			it4 = S.find(p);
			if( it4 == S.end() )
			{	
				S.insert(it2,std::pair<int,int>(p,q));
				it2++;
			}
			else
			{
				S[p]+=q;
			}
			
		}
	}

	std::map<int,int>::iterator it;
	/*std::cout << "B contains:\n";
  	for (it=B.begin(); it!=B.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';
	
	std::cout << "S contains:\n";
  	for (it=S.begin(); it!=S.end(); ++it)
    std::cout << it->first << " => " << it->second << '\n';

	cout<<endl;
*/
	
	if(S.size() > 0)
	{
		i=0;
		it = S.end();
		--it;

		for(;i<s;--it,i++)
		{
			if(it == S.begin())
				i=s;
			cout<<"S"<<" "<<it->first<<" "<<it->second<<endl;
			
		}
	}

	if(B.size()>0)
	{
		i=0;
		it = B.end();
		--it;	
		for(;i<s;--it,i++)
		{
			if(it == B.begin())
				i=s;
			cout<<"B"<<" "<<it->first<<" "<<it->second<<endl;
		}
	}
	return 0;

}