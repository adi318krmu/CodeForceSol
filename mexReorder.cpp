#include <bits/stdc++.h>
using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];

//         // find mex
//         vector<bool> seen(n + 1, false);
//         for (int x : a) {
//             if (x <= n) seen[x] = true;
//         }

//         int mex = 0;
//         while (mex <= n && seen[mex]) mex++;

//         // count elements smaller than mex
//         int cnt = 0;
//         for (int x : a) {
//             if (x < mex) cnt++;
//         }

//         cout << (cnt == mex ? "YES\n" : "NO\n");
//     }

//     return 0;
// }
// if(zero==0)NO;
// else if(zero==1)yes;
// else if(one==0) no;
//else yes

// 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
      
    

    vector<int> cnt(n + 1);
    for(auto i : arr) cnt[i]++;

    if(cnt[0] == 0) cout << "NO\n";
    else if(cnt[1] > 0) cout << "YES\n";
    else cout << (cnt[0] == 1? "YES" : "NO") << '\n';
    //      unordered_map<int , int> mp;
    //    for(int i=0;i<n;i++){
    //     mp[i]++;

    //    }
    //     // base case
      
    //    if(mp[0]==0){
    //     cout<<"no"<<endl;
    //    }
    //    else if(mp[1]>0){
    //     cout<<"yes"<<endl;
    //    }
    //    else{
    //     cout<<(mp[0]==1?"yes":"no")<<endl;
    //    }


    }
    return 0;

}