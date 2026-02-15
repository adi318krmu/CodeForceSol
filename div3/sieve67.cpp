// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     bool cntOne=false;
//     bool cntN=false;
//     for(int x: arr){
//         if(x==1){
//             cntOne=true;
//         }
//         else if(x==67){
//             cntN=true;
//         }
//     }

//     if(cntN&& cntOne){
//         cout<<"YES\n";
//     }
//     else{
//         cout<<"NO\n";
//     }
//   }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        bool found = false;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==67) found = true;
        }

        if(found) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
