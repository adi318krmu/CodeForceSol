#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,k;
    cin>>n>>k;
    int arr[n];
    int time[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cin>>time[i];
    }
     int base=0;
     for(int i=0;i<n;i++){
        if(time[i]==1){
            base+=arr[i];
            arr[i]=0;
        }
     }

     int maxExtra=0;
     int extra=0;
     for(int i=0;i<k;i++){
        extra+=arr[i];
     }
     maxExtra=extra;
     for(int i=k;i<n;i++){
             extra+=arr[i];
             extra-=arr[i-k];
             maxExtra=max(maxExtra, extra);
     }
     cout<<base+ maxExtra<<endl;
 return 0;

}