#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<int> suf(n + 2, 0);
    set<int> s;

    // build suffix distinct count
    for (int i = n; i >= 1; i--) {
        s.insert(a[i]);      // add current element
        suf[i] = s.size();   // number of distinct elements so far
    }

    // answer queries
    while (m--) {
        int l;
        cin >> l;
        cout << suf[l] << endl;
    }

    return 0;
}
