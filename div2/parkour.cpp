#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long diff = x - 2*y;

        if (diff % 3 != 0) {
            cout << "NO\n";
            continue;
        }

        long long k = diff / 3;

        if (k < 0) {
            cout << "NO\n";
            continue;
        }

        long long need = 0;
        if (y < 0) need = -y;

        if (k >= 2 * need)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}