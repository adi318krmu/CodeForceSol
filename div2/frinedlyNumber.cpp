#include <iostream>
using namespace std;

int getSum(long long n) {
    int total = 0;

    while (n > 0) {
        total += n % 10;
        n /= 10;
    }

    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        int ans = 0;

        // Only numbers near x are possible
        for (long long y = x; y <= x + 90; y++) {
            int s = getSum(y);

            if (y - s == x)
                ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}
