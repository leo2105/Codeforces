#include<iostream>
#include <vector>
using namespace std;

int main(){
	int n,k,a;
	vector<int> A;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a;
		A.push_back(a);
	}
	int aux;
	int cont = 0;
	for(int i=1;i<n;i++){
		aux = A[i-1];
		if(A[i] - aux <= k) cont ++;
		else cont = 0;
	}
	cout<<(cont+1)<<endl;
	return 0;
}
