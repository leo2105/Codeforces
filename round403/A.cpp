#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x;
    cin >> n;
    bool A[100005];
    int may=0;
    memset( A, false, sizeof A) ;
    int cont = 0;
    for ( int i = 0 ; i < 2*n ; i++ ){
        cin >> x;
        if ( A[x] == false){
            A[x] = true; cont++;
        }else{
            cont--; A[x] = false;
        }
//        cout << cont << endl;
        if (cont > may) may = cont;
    }
    cout<< may << endl;
    return 0;
}
