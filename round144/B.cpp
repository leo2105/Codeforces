#include <bits/stdc++.h>
#define ll long long
using namespace std;

int suma (int a){
	int cont = 0;
	while(a != 0){
		cont += (a%10);
		a /= 10;
	}
	return cont;

}
int main(){
	ll n;
	int aux;
	double k;
	cin >> n;
	for(int i=1;i<=81;i+=1){
		k = sqrt((ll)i*(ll)i+4*n);	
		aux = (int)k;
		if((1.0)*aux*aux == k*k && ( aux - i ) % 2 == 0){
			if (suma((aux - i )/2) == i){
				 cout << (int)((aux-i)/2) << endl; return 0;
			}
		}
	}
	cout << (-1) << endl;
	return 0;
}
