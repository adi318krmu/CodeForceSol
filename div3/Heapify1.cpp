// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> arr(n+1);
//         arr[0]=0;
//         for(int i=1;i<=n;i++){
//             cin>>arr[i];
//         }

//         for(int i=1;i<=n/2;i++){
//             if(i+1!=arr[i]){
//                 swap(arr[i],arr[2*i]);
//             }
//         }
//        bool check=true;
//         for(int i=1;i<=n;i++){
//             if(arr[i]!=i){
//                check=false;
//             }
            
//         }
//         if(check){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO\n";
//         }
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<int> visited(n + 1, 0);
        bool possible = true;

        for (int start = 1; start <= n; start++) {
            if (visited[start]) continue;

            // build one component
            vector<int> positions;
            queue<int> q;
            q.push(start);
            visited[start] = 1;

            while (!q.empty()) {
                int u = q.front();
                q.pop();
                positions.push_back(u);

                // go to 2*u
                if (2 * u <= n && !visited[2 * u]) {
                    visited[2 * u] = 1;
                    q.push(2 * u);
                }

                // go to u/2
                if (u % 2 == 0 && !visited[u / 2]) {
                    visited[u / 2] = 1;
                    q.push(u / 2);
                }
            }

            // collect values in this component
            vector<int> vals;
            for (int idx : positions)
                vals.push_back(a[idx]);

            sort(positions.begin(), positions.end());
            sort(vals.begin(), vals.end());

            // check if we can place correctly
            for (int i = 0; i < positions.size(); i++) {
                if (positions[i] != vals[i]) {
                    possible = false;
                    break;
                }
            }

            if (!possible) break;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
