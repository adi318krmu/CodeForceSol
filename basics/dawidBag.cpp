//https://codeforces.com/problemset/problem/1230/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4], sum = 0;
    for(int i = 0; i < 4; i++) {
        cin >> a[i];
        sum += a[i];
    }

    if(sum % 2) {
        cout << "NO\n";
        return 0;
    }

    int target = sum / 2;

    // check single bag
    for(int i = 0; i < 4; i++)
        if(a[i] == target) {
            cout << "YES\n";
            return 0;
        }

    // check pairs
    for(int i = 0; i < 4; i++)
        for(int j = i + 1; j < 4; j++)
            if(a[i] + a[j] == target) {
                cout << "YES\n";
                return 0;
            }

    cout << "NO\n";
}