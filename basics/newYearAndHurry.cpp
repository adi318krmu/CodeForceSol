//https://codeforces.com/problemset/problem/750/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        arr[i]=(i+1)*5;
    }

    vector<int> pre(n,0);
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+arr[i];
    }
    int remain=240-k;
    int l=0;  int r=n-1;
    int ans=0;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(remain>=pre[mid]){
            ans=mid+1;
         l=mid+1;
        }else{
            r=mid-1;
        }

    }
    cout<<ans<<endl;
    return 0;

}