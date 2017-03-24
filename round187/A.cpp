#include <bits/stdc++.h>
using namespace std;

int A[1005], B[1005];

int main(){
    
    int n, a, b, cont = 0;
    bool flag ;
    cin >> n;
    
    for ( int i = 0 ; i < n ; i++ )
        cin >> A[i] >> B[i];

    for ( int i = 0 ; i < n ; i++ ){
        flag = true;
        for ( int j = 0 ; j < n ; j++ ){
            if ( i != j && A[i] == B[j] ) flag = false;
        }
        cont += (flag);
    }

    cout << cont << endl;
    return 0;
}
