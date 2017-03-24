#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,x,T;
	bool flag=true;
	int suma=0,sumb=0;
	int sa,sb;
	vector<int> A,B;
	scanf("%d",&T);
	while(T--){
		scanf("%d",&N);
		suma = 0,sumb = 0;	
		flag = true;
		for(int i=0;i<N;i++){
			scanf("%d",&x);
			if(x == 0)
				flag ^= true;
			if(flag)
				suma += x;
			else
				sumb += x;
		}
			cout<<suma<<" "<<sumb<<endl;
		flag = true; 
		sa = 0, sb=0;
		for(int i=0;i<N;i++){
			//da = suma - sa, db = sumb - sb;
			//cout<<"hoaqw"<<endl;
			if(flag == true){
				if(sa > sumb ){
					 cout<<i<<endl;
	 				break;
				}	
			}
			else{
				if(sb > suma){
					cout<<i<<endl;
					break;
				}
			}
			if(x == 0)
				flag ^= true;
			if(flag)
				sa += x;
			else
				sb += x;
			if(i == N-1) cout<<N<<endl;
			//cout<<i<<endl;
		}		
		//cout<<"hola"<<endl;
	}
	return 0;
}
