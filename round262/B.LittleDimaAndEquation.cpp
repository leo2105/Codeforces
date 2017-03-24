#include<bits/stdc++.h>
#define ll long long
using namespace std;

int sumCifras(ll x){
	ll rpta = 0LL;
	while(x != 0LL){
		rpta += (x%10LL);
		x /= 10LL;
	}
	return rpta;
}

ll pot(int x,int a){
    ll rpta=1LL;
    while(a--){
        rpta *= (ll)x;
    }    
    return rpta;
}
int main(){
	int a,b,c;
	ll aux;
	vector<ll> v;
	cin>>a>>b>>c;
	for(int i=1;i<=81;i++){
	    
		aux = (ll)b*(ll)pot(i,a)+(ll)c;
		//cout<<aux<<endl;
		if(aux > 0LL && aux < 1000000000 && sumCifras(aux) == i)
			v.push_back(aux);	
		if(aux >= 1000000000) break;
	}
	cout<<v.size()<<endl;
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}
