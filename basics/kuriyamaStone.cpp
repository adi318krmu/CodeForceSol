#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for(long long i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Prefix for original array
    vector<long long> pre(n);
    pre[0] = arr[0];
    for(long long i = 1; i < n; i++){
        pre[i] = pre[i-1] + arr[i];
    }

    // Sort array
    sort(arr.begin(), arr.end());

    // Prefix for sorted array
    vector<long long> preSort(n);
    preSort[0] = arr[0];
    for(long long i = 1; i < n; i++){
        preSort[i] = preSort[i-1] + arr[i];
    }

    long long q;
    cin >> q;

    while(q--){
        long long type, l, r;
        cin >> type >> l >> r;

        long long ans;

        if(type == 1){
            if(l == 1)
                ans = pre[r-1];
            else
                ans = pre[r-1] - pre[l-2];
        }
        else{
            if(l == 1)
                ans = preSort[r-1];
            else
                ans = preSort[r-1] - preSort[l-2];
        }

        cout << ans << endl;
    }

    return 0;
}