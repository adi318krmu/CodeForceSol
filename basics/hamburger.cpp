//https://codeforces.com/problemset/problem/371/C
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long nb, ns, nc;
    cin >> nb >> ns >> nc;

    long long pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    // count needed per burger
    long long cb = 0, cs = 0, cc = 0;
    for(char ch : s){
        if(ch == 'B') cb++;
        else if(ch == 'S') cs++;
        else cc++;
    }

    long long low = 0, high = 1e13;
    long long ans = 0;

    while(low <= high){
        long long mid = low + (high - low) / 2;

        // required ingredients for mid burgers
        long long needB = max(0LL, cb * mid - nb);
        long long needS = max(0LL, cs * mid - ns);
        long long needC = max(0LL, cc * mid - nc);

        long long cost = needB * pb + needS * ps + needC * pc;

        if(cost <= r){
            ans = mid;
            low = mid + 1;   // try more burgers
        } else {
            high = mid - 1;  // reduce burgers
        }
    }

    cout << ans << endl;

    return 0;
}