// #include<bits/stdc++.h>
// using namespace std;
// int minNumber(int n){
// int minN=INT_MAX;
//         while(n!=0){
//             minN=min(minN,n%10);
//             n=n/10;
//         }
//         return minN;
// }


// int maxNumber(int n){
// int maxN=INT_MIN;
//         while(n!=0){
//             maxN=max(maxN,n%10);
//             n=n/10;
//         }
//         return maxN;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//       int l,r;
//       cin>>l>>r;
//       vector<int> store(r+1);
//       int maxL=0;
//       for(int i=l;i<=r;i++){
//          int total=maxNumber(i)-minNumber(i);
//          maxL=max(maxL,total);
//          store[i]=total;
//       }

//       for(int i=l;i<=r;i++){
//         if(maxL==store[i]){
//             cout<<i<<endl;
//         }
//       }

//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int luckiness(int n){
    int mn = 9, mx = 0;
    while(n){
        int d = n % 10;
        mn = min(mn, d);
        mx = max(mx, d);
        n /= 10;
    }
    return mx - mn;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int l, r;
        cin >> l >> r;

        int bestNum = l;
        int bestLuck = -1;

        for(int i = l; i <= min(r, l + 100); i++){
            int cur = luckiness(i);

            if(cur > bestLuck){
                bestLuck = cur;
                bestNum = i;
            }

            if(bestLuck == 9) break;  // can't get better
        }

        cout << bestNum << endl;
    }
}