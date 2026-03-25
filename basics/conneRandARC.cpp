// //https://codeforces.com/problemset/problem/1293/A
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,s,k;
//         cin>>n>>s>>k;
//         vector<int> arr(k);
//         unordered_map<int, bool> mp;
//         for(int i=0;i<k;i++){
//             cin>>arr[i];
//             mp[arr[i]]=false;
//         }
//         int minF=0;
//         for(auto x:mp){
//             if(x.second==true){
//                 minF=min(minF,x.first);
//             }
//         }

//         int stair=abs(s-minF);
//         cout<<stair<<endl;

//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s, k;
        cin >> n >> s >> k;

        vector<int> arr(k);
        unordered_set<int> blocked;   // better than map

        for(int i = 0; i < k; i++){
            cin >> arr[i];
            blocked.insert(arr[i]);
        }

        int ans = 0;

        for(int d = 0; d <= 1000; d++){
            if(s - d >= 1 && blocked.count(s - d) == 0){
                ans = d;
                break;
            }
            if(s + d <= n && blocked.count(s + d) == 0){
                ans = d;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}