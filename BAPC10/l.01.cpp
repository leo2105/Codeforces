#include <bits/stdc++.h>
using namespace std;

int main(){
	string A;
	cin>>A;
	double sum;
	int a,b;
	vector<int> V1,V0;
	int N = A.size();

	for(int i=0;i<N;i++){
		if(A[i] == '1')
			V1.push_back(i);
		else
			V0.push_back(i);
	}
	
	int cont = 0;
	char aux;
	sum = 0.0;

	/*while( cont < M){
		a = V1[cont];
		b = V0[V0.size()-1-cont];
		aux = A[a];
		A[a] = A[b];
		A[b] = aux;
		sum += sqrt(b-a);
		cont++;
	}*/
	for(int i=0;i<N;i++){
		if(A[i]=='1'){
			for(int j=N-1;j>i;j--){
				if(A[j]=='0'){
					aux = A[i];
					A[i] = A[j];
					A[j] = aux;
					sum += sqrt(j-i);
					break;
				}
			}
		}
	}
	printf("%.15f\n",sum);
	return 0;
}
