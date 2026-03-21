//https://codeforces.com/problemset/problem/251/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d;
    cin >> n >> d;

    vector<long long> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int l = i + 1, h = n - 1;
        int r = i;

        while (l <= h) {
            int mid = l + (h - l) / 2;

            if (x[mid] - x[i] <= d) {
                r = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }

        long long cnt = r - i;
        if (cnt >= 2) {
            ans += (cnt * (cnt - 1)) / 2;
        }
    }

    cout << ans << endl;
    return 0;
}