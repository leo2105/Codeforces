#include <iostream>
using namespace std;

int main(){
	int n,a,b;
	string S;
	cin >> n >> a >> b;
	cin >> S;
	if ( S[a-1] != S[b-1] )
		cout << 1 << endl;
	else
		cout << 0 << endl;
	return 0;
}
