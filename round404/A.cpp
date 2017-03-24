#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    string S;
    while ( n--){
        cin >> S;
        if ( S == "Tetrahedron")
            sum += 4;

        if ( S == "Cube")
            sum += 6;
        if ( S == "Octahedron")
            sum += 8;
        if ( S == "Dodecahedron")
            sum += 12;
        if ( S == "Icosahedron")
            sum += 20;
    }
    cout << sum << endl;
    return 0;
}
