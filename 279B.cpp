#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxN=INT_MIN;
    int sum=0;
    int i=0;
    int j=0;
    while( j<n){
       sum+=arr[j];
       while(sum>t){
        sum-=arr[i];
        i++;
       }

       maxN=max(maxN, j-i+1);
       j++;

    }
    cout<<maxN<<endl;
    return 0;

}
