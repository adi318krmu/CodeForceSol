#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string original="abc";
        string s="";
        for(int i=0;i<3;i++){
            char a;
            cin>>a;
            s+=a;
        }
        int numMis=0;
        for(int i=0;i<3;i++){
            if(s[i]!=original[i]){
                numMis++;
            }
        }
        if(numMis==3){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}