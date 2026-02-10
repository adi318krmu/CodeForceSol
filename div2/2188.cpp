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
        int l = 1, r = n;

        for (int i = n - 1; i >= 0; i--) {
            if ((n - 1 - i) % 2 == 0)
                p[i] = r--;
            else
                p[i] = l++;
        }

        for (int x : p)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}
