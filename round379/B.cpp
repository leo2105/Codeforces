#include <iostream>
using namespace std;

int main(){
	int k2,k3,k5,k6;
	cin>>k2>>k3>>k5>>k6;
	int x = min( k2, min(k5,k6) );
	long long s = 0LL;
	s += (x * (256LL));
	int y = min ( k2 - x, k3);
	s += (y * (32LL));
	cout<<s<<endl;
	
	return 0;
}
