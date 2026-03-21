//https://codeforces.com/problemset/problem/706/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;

        int l = 0, h = n;

        while (l < h) {
            int mid = l + (h - l) / 2;

            if (arr[mid] <= a) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }

        cout << l << endl;
    }

    return 0;
}