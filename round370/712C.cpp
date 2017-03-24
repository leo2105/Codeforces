#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
	int x,y;
	int rpta = 0;
	cin>>y>>x;
	vector<int> vec(3,x);
	while(true){
		sort(vec.begin(),vec.end());
		if(vec[0] >= y)
			break;
		vec[0] = vec[1] + vec[2] - 1; 
		rpta++;
	}
	cout<<rpta<<endl;
	return 0;
}
