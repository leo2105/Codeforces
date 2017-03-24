#include <bits/stdc++.h>
using namespace std;

const int N = 5e2+5;
int A[N], B[N];

vector<int> resp;

void Algoritmo(){

}

int main(){
	int n,k;
	cin >> n;
	for ( int i = 0 ; i < n ; i++ ) cin >> A[i] ;
	cin >> k;
	for ( int i = 0 ; i < k ; i++ ) cin >> B[i];
	
	int sum = 0;
	int j = 0;
	for ( int i = 0 ; i < n ; i++){
		if ( sum + A[i] <= B[j] ){
			sum += A[i];	
			resp.push_back(A[i]);
			if( sum == B[j]){
				Algoritmo(j+1);
				resp.clear();
				j++;
			}
			sum = 0;
		}
		else{
			cout << "NO" << endl; return 0;
		}
	}

	return 0;
}
