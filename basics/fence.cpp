#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int minSum=0;
    int idx=0;
    for(int i=0;i<k;i++){
       sum+=arr[i];
    }
    minSum=sum;
    for(int i=k;i<n;i++){
        sum+=arr[i];
        sum-=arr[i-k];
        if(sum<minSum){
            idx=i-k+1;
            minSum=sum;
        }
    }
    cout<<idx+1<<endl;
    return 0;
}