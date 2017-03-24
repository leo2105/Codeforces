#include <bits/stdc++.h>
using namespace std;

int main(){
	string x = "ogo";
	string y = "go";
	string A;
	int n;
	cin>>n;
	cin>>A;
	bool vis[105];
	memset(vis,true,sizeof A);
	vector<char> B;
	for(int i=0;i<A.size();i++){
		if(i+2 < A.size() && A[i] == 'o' && A[i+1] == 'g' && A[i+2] == 'o'){
			i+=3;
			while(i+1 < A.size() && A[i] == 'g' && A[i+1] == 'o')
				i+=2;
			cout<<"***";
			i--;
		}else{
			cout<<A[i];		
		}
		//cout<<i<<endl;
		
	}
	cout<<endl;
	return 0;
}
