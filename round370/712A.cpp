#include <iostream>
using namespace std;

int A[100005];
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>A[i];
	}	
	for(int i=0;i<N-1;i++){
		cout<<(A[i]+A[i+1])<<" ";
	}
	cout<<A[N-1]<<endl;
	return 0;
}
