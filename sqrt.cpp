#include<bits/stdc++.h>
using namespace std;

// problem 2185

int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      vector<int> arr(n);
      for(int i=0;i<n;i++){
         int a;
         cin>>a;
         arr[i]=a;
      }
      sort(arr.begin(), arr.end());
      int ans=arr[n-1]*n;
     cout<<ans<<endl;
     return 0;
      
   }
}
// int main(){
//     int t;
//     cin>>t;
//   while(t--){
//      int n ;
//      cin>>n;
//      while(n>0){
//         int a;
//         cin>>a;
//         cout<<a<<" ";
//         n--;
//      }
//      cout<<endl;
//   }
//   return 0;
// }