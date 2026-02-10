#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
         long long x;
          cin >> n >> x;

        long long maxA = 0;
        long long bestDelta = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            long long a, b, c;
            cin >> a >> b >> c;

            maxA = max(maxA, a);
            bestDelta = max(bestDelta, a - c);
        }

        // Case 1: can reach directly
          if (maxA >= x) {
            cout << 0 << '\n';
            continue;
        }

        // Case 2: no positive progress possible
          if (bestDelta <= 0) {
            cout << -1 << '\n';
            continue;
        }

        // Case 3: need rollbacks
        long long remaining = x - maxA;
          long long rollbacks = (remaining + bestDelta - 1) / bestDelta;
 
        cout << rollbacks << '\n';
    }

    return 0;
}
