// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> p(n + 1), a(n + 1);
//         vector<int> pos(n + 1);

//         for (int i = 1; i <= n; i++) {
//             cin >> p[i];
//             pos[p[i]] = i;  // position of each value in permutation
//         }

//         for (int i = 1; i <= n; i++)
//             cin >> a[i];

//         bool ok = true;

//         // check each position
//         for (int i = 1; i <= n && ok; i++) {
//             int v = a[i];
//             int start = pos[v];

//             if (start <= i) {
//                 // move right
//                 for (int j = start; j <= i; j++) {
//                     if (a[j] < v) {
//                         ok = false;
//                         break;
//                     }
//                 }
//             } else {
//                 // move left
//                 for (int j = i; j <= start; j++) {
//                     if (a[j] < v) {
//                         ok = false;
//                         break;
//                     }
//                 }
//             }
//         }

//         cout << (ok ? "YES\n" : "NO\n");
//     }

//     return 0;
// }
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

         vector<int> p(n), a(n);

        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> a[i];

        bool ok = true;

        for (int i = 0; i < n; i++) {
            if (a[i] == p[i]) continue;

            bool possible = false;

            if (i > 0 && a[i] == a[i-1])
                possible = true;

            if (i + 1 < n && a[i] == a[i+1])
                possible = true;

            if   (!possible) {
                ok = false;
                 break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
