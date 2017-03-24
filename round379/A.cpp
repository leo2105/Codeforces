#include <iostream>

using namespace std;

int main(){
	string A;
	int a;
	cin>>a;
	cin>>A;
	int c1=0,c2=0;
	for(int i=0; i<A.size();i++)
		if(A[i] == 'A') c1++;
		else c2++;
	if(c1 == c2) cout<<"Friendship"<<endl;
	else	if( c1 > c2 ) cout<<"Anton"<<endl;
		else cout<<"Danik"<<endl;
	return 0;
}
	
