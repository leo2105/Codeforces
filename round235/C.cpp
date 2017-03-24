#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    if ( n*2+2 < m || n > m + 1 )
        cout << -1;
    else if ( n == m || n == m + 1 ){
        while ( m ){ 
            cout << "01";
            --n, --m;
        }
        if ( n ) cout << 0;
    }
    else{
        while ( n + 1 < m && n != 1 ) {
            cout << 110;
            --n, m-=2;
        }
        if ( n == 1) {
            if ( m == 2 ) cout << 101;
            if ( m == 3 ) cout << 1101;
            if ( m == 4 ) cout << 11011;
        }
        else{
            while( n != 0) {
                cout << 10;
                --n;
            }
            cout << 1;
        }
    }
    cout << endl;
    return 0;
}
