
#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        long long c;
        cin >> n >> c;

        string s;
        cin >> s;

        // Step 1: check pattern validity (no '1' after '0')
        bool zeroStarted = false;
        bool invalid = false;

        for (char ch : s) {
            if (ch == '0') {
                zeroStarted = true;
            } else { // ch == '1'
                if (zeroStarted) {
                    invalid = true;
                    break;
                }
            }
        }

        if (invalid) {
            cout << -1 << '\n';
            continue;
        }

        // Step 2: count number of ones
        int k = 0;
        for (char ch : s) {
            if (ch == '1') k++;
        }

        // Step 3: factorials modulo MOD
        vector<long long> fact(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        // Step 4: factorials modulo c (only for divisibility check)
        vector<long long> factModC(n + 1, 1 % c);
        for (int i = 1; i <= n; i++) {
            factModC[i] = (factModC[i - 1] * i) % c;
        }

        // Step 5: compute f(w)
        // f = (n-k+1)*k!*(n-k)! - 2*k!*(n-k-1)!
        long long fMOD = 0;
        long long fC = 0;

        // main term
        long long baseMOD = fact[k];
        baseMOD = (baseMOD * fact[n - k]) % MOD;
        baseMOD = (baseMOD * (n - k + 1)) % MOD;

        long long baseC = factModC[k];
        baseC = (baseC * factModC[n - k]) % c;
        baseC = (baseC * ((n - k + 1) % c)) % c;

        fMOD = baseMOD;
        fC = baseC;

        // subtract forbidden cases
        if (n - k - 1 >= 0) {
            long long badMOD = fact[k];
            badMOD = (badMOD * fact[n - k - 1]) % MOD;
            badMOD = (badMOD * 2) % MOD;

            long long badC = factModC[k];
            badC = (badC * factModC[n - k - 1]) % c;
            badC = (badC * 2) % c;

            fMOD = (fMOD - badMOD + MOD) % MOD;
            fC = (fC - badC + c) % c;
        }

        // Step 6: final decision
        if (fC == 0) {
            cout << -1 << '\n';
        } else {
            cout << fMOD << '\n';
        }
    }

    return 0;
}
