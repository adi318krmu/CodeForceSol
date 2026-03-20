//https://codeforces.com/problemset/problem/1042/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mx = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        mx = max(mx, x);
    }

    int minAns = max(mx, (sum + m + n - 1) / n);
    int maxAns = mx + m;

    cout << minAns << " " << maxAns << endl;

    return 0;
}