#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
         long long n, w;
        cin >> n >> w;

        long long full= n/ w;
        long long rem= n% w;

        long long answ =full * (w - 1) + rem;
            cout<<answ<<endl;
    }
}
