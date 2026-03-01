//https://codeforces.com/problemset/problem/1351/B
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;

        bool ok = false;

        // Try all rotations
        if(a1 == a2 && b1 + b2 == a1) ok = true;
        if(a1 == b2 && b1 + a2 == a1) ok = true;
        if(b1 == a2 && a1 + b2 == b1) ok = true;
        if(b1 == b2 && a1 + a2 == b1) ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}