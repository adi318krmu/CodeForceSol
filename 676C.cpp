// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int l ;
//     int k;
//     cin>>l>>k;
//     string s="";
//     for(int i=0;i<l;i++){
//         char a;
//         cin>>a;
//         if(a!='a' && a!='b'){
//             cout<<"enter correct one ";
//         }
//         s+=a;
//     }

//     int i=0;
//     int j=0;
//     int cnt=0;
//     while(j<l){
//         if(s[i]!=s[j] && k>0){
//             k--;
//             if(s[i]=='a' && s[j]=='b'){
//                 s[j]='a';
//             }
//             if(s[i]=='b' && s[j]=='a'){
//                 s[j]='b';
//             }
           
//         }
        
//         cnt++;
//         j++;

//     }

//         return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, k;
    cin >> l >> k;

    string s;
    cin >> s;

    int ans = 0;

    // We will try both priorities: 'a' and 'b'
    for (char target : {'a', 'b'}) {
        int i = 0;
        int cnt = 0; // how many changes used

        for (int j = 0; j < l; j++) {
            if (s[j] != target)
                cnt++;

            // if changes exceed k, shrink window
            while (cnt > k) {
                if (s[i] != target)
                    cnt--;
                i++;
            }

            ans = max(ans, j - i + 1);
        }
    }

    cout << ans << endl;
    return 0;
}
