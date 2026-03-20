//https://codeforces.com/problemset/problem/496/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;

    // Try removing each middle element
    for(int remove = 1; remove < n - 1; remove++) {
        int maxDiff = 0;

        for(int i = 1; i < n; i++) {

            if(i == remove) continue;

            if(i - 1 == remove)
                maxDiff = max(maxDiff, a[i] - a[i - 2]);
            else
                maxDiff = max(maxDiff, a[i] - a[i - 1]);
        }

        ans = min(ans, maxDiff);
    }

    cout << ans << endl;

    return 0;
}