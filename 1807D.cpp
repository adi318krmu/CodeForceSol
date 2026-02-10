#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n , q;
    cin>>n >> q;
    int arr[n+1];
    vector<long long> pre(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pre[i]=pre[i-1]+arr[i];
    }
    long long totalSum=pre[n];
    while(q--){
        int l , r, k;
        cin>>l >>r>>k;
        long long reqSum=pre[r]-pre[l-1];
        long long len=r-l+1;
        long long res= totalSum- reqSum+(len)*k;
        if(res%2==1){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    

    }
    return 0;
}