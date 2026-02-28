#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int minN=INT_MAX;
        while(n!=0){
            minN=min(minN,n%10);
            n=n/10;
        }
        cout<<minN<<endl;
    }
    return 0;
}