#include <iostream>
using namespace std; 
int main(){
	int n;
	cin>>n;
	if(n==0){ cout<<1<<endl;return 0;}
	
	n = n%4;
	if(n == 0)
		cout << 6;
	if( n == 1)
		cout << 8;
	if(n==2)
		cout<<4;
	if(n==3)
		cout<<2;
	cout<<endl;
	return 0;
}
