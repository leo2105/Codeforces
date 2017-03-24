#include <bits/stdc++.h>
using namespace std;

struct nodo{
    int l, r, dif;
};

vector <nodo> A, B;

bool orden1( nodo x, nodo y){
    if ( x.l < y.l) return true;
    //if ( x.dif == y.dif && x.l < x.r )return true;
    return false;
}
bool orden2( nodo x, nodo y){
    if ( x.r < y.r) return true;
    return false;
}
int main(){
    int n, m;
    cin >> n;
    
    for ( int i = 0 ; i < n ; i++ ){
        nodo x;
        cin >> x.l >> x.r ;
        x.dif = x.r - x.l;
        A.push_back(x);
    }
    cin >> m;
    for ( int i = 0 ; i < m ; i++ ){
        nodo x;
        cin >> x.l >> x.r ;
        x.dif = x.r - x.l;
        B.push_back(x);
    }

    sort(A.begin(), A.end(), orden2);
    sort(B.begin(), B.end(), orden1);
    
    int may = 0;
   // cout << B[B.size()-1].l << " " << A[0].r << endl;
    may = max( may, B[B.size()-1].l-A[0].r );

    sort ( A.begin(), A.end(), orden1);
    sort( B.begin(), B.end(), orden2);
    may = max( may, A[A.size()-1].l - B[0].r);
    
    cout << may << endl;

 //   cout << minl << " " <<  minr << " " << mindif << endl; 
    return 0;
}
