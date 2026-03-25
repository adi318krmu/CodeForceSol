//https://codeforces.com/problemset/problem/474/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> pre(n);
    pre[0]=arr[0];
    for(int i=1;i<n;i++){
      pre[i]=pre[i-1]+arr[i];
    }
    int m;
    cin>>m;
    while(m--){
        int a;
        cin>>a;
        int l=0;
        int h=n-1;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(pre[mid]>=a){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}