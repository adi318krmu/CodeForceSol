#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<string> strips(k);
        for (int i = 0; i < k; i++) {
            cin >> strips[i];
        }

        // try all possible period lengths
        for (int d = 1; d <= n; d++) {
            if (n % d != 0) continue;

            string res(n, '?');
            bool valid = true;

            // check each remainder group
            for (int start = 0; start < d && valid; start++) {
                vector<int> common(26, 1);

                for (int pos = start; pos < n; pos += d) {
                    vector<int> present(26, 0);

                    for (int s = 0; s < k; s++) {
                        present[strips[s][pos] - 'a'] = 1;
                    }

                    for (int c = 0; c < 26; c++) {
                        common[c] &= present[c];
                    }
                }

                int chosen = -1;
                for (int c = 0; c < 26; c++) {
                    if (common[c]) {
                        chosen = c;
                        break;
                    }
                }

                if (chosen == -1) {
                    valid = false;
                    break;
                }

                for (int pos = start; pos < n; pos += d) {
                    res[pos] = char('a' + chosen);
                }
            }

            if (valid) {
                cout << res << "\n";
                break;
            }
        }
    }
    return 0;
}
