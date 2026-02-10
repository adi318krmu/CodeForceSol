#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        // suffix maximum values
        vector<int> sufMax(n);
        sufMax[n - 1] = p[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            sufMax[i] = max(p[i], sufMax[i + 1]);
        }

        int l = -1, r = -1;

        // find first position where improvement is possible
        for (int i = 0; i < n - 1; i++) {
            if (p[i] < sufMax[i + 1]) {
                l = i;
                break;
            }
        }

        // if improvement found
        if (l != -1) {
            // find rightmost position of sufMax[l+1]
            for (int i = n - 1; i > l; i--) {
                if (p[i] == sufMax[l + 1]) {
                    r = i;
                    break;
                }
            }
            reverse(p.begin() + l, p.begin() + r + 1);
        }

        for (int x : p) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
