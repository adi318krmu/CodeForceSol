// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int q;
//     cin>>q;
//     while(q--){
//         int n,t;
//         cin>>n>>t;
//         unordered_map<int , int> mp;
//         vector<int> duration(n);
//         vector<int> entertain(n);
//         for(int i=0;i<n;i++){
//             cin>>duration[i];
//         }

//          for(int i=0;i<n;i++){
//             cin>>entertain[i];
//         }
//            int maxE=0;
//         for(int i=0;i<n;i++){
//             if(t<duration[i])break;
//             mp[i]=entertain[i];
//             maxE=max(maxE,entertain[i]);
             
//             t--;
//         }
//         for(auto x:mp){
//             if(x.second==maxE){
//                 cout<<x.first + 1<<endl;
//             }
//         }
//     }
//     return 0;

// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    while(q--){
        int n, t;
        cin >> n >> t;

        vector<int> duration(n);
        vector<int> entertain(n);

        for(int i = 0; i < n; i++)
            cin >> duration[i];

        for(int i = 0; i < n; i++)
            cin >> entertain[i];

        int maxE = -1;
        int ans = -1;

        for(int i = 0; i < n; i++){
            if(duration[i] + i <= t){
                if(entertain[i] > maxE){
                    maxE = entertain[i];
                    ans = i + 1;   // 1-based index
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}