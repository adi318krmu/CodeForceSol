#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());
        vector<bool> pattern(n, false);
        pattern[n-1]=true;
         int cntB=0;
         int cntR=0;
         for(auto x:pattern){
            if(x==false)cntB++;
            if(x==true)cntR++;
         }
         int sumB=0;
         int sumR=0;


    }
    return 0;
}