#include <stdio.h>
using namespace std;

int main(){
	
	int n,m,aux,cont=0;
	int men,may;
	scanf("%d %d",&n,&m);
	int A[1005][1005];
	
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			scanf("%d",&A[i][j]);
	
	for(int i=0;i<n;i++){
		men = 1010,may = -1;
		for(int j=0;j<m;j++){
			if(A[i][j] == 1){
				may = (j > may ? j : may);
				men = (j < men ? j : men);
				
			}
		}
	
		for(int j = 0 ; j < m ; j++){
			if( A[i][j] == 0){
				cont = (j > men ? cont+1 : cont);
				cont = (j < may ? cont+1 : cont);
			}
		}
		
	}


	for(int j=0;j<m;j++){	
		men = 1010,may = -1;
		for(int i=0;i<n;i++){
			if(A[i][j] == 1){
				may = (i > may ? i : may);
				men = (i < men ? i : men);		
			}
		}

		for(int i = 0 ; i < n ; i++){
			if( A[i][j] == 0){
				cont = (i > men ? cont+1 : cont);
				cont = (i < may ? cont+1 : cont);
			}
		}
		
	}
	printf("%d\n",cont);
	return 0;
}	
