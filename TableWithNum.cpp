#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;

        int rows = 0, cols = 0, usable = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x <= h) rows++;
            if (x <= l) cols++;
            if (x <= max(h, l)) usable++;
        }

        int answer = min({rows, cols, usable / 2});
        cout << answer << '\n';
    }

    return 0;
}
