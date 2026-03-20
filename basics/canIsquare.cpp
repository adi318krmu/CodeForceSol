//https://codeforces.com/problemset/problem/1915/C
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        for(long long i=0;i<n;i++){
            cin>>arr[i];
        }
        long long root=0;
        for(long long x: arr){
            root+=x;
        }

        long long ans=sqrt(root);
        if(ans*ans==root){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
    return 0;
}