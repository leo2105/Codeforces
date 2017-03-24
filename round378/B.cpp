#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int L[N] , R[N];
int main(){
	int n;
	cin >> n;
	int sumL=0,sumR=0;
	for (int i=0;i<n;i++){
		cin >> L[i] >> R[i];
		sumL += L[i] , sumR += R[i];
	}

	int swp = 0;
	int a,b;
	int ans = abs(sumR-sumL);
	int key = 0;
	for(int i=0;i<n;i++){
		a = sumL - L[i] + R[i] , b = sumR - R[i] + L[i];
		if(abs(a-b) > ans){
			ans = abs(a-b),key = i+1;
		}
	}
	cout << key << endl;
		
	
	return 0;
}	
