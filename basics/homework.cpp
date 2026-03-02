//https://codeforces.com/problemset/problem/2132/A
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){

    // input n for string a
    int n;
    cin>>n;
    string a="";
    for(int i=0;i<n;i++){
        char as;
        cin>>as;
        a+=as;
    }
      
    // input m for string b
    int m;
    cin>>m;
    string b="";
    for(int i=0;i<m;i++){
        char as;
        cin>>as;
        b+=as;
    }

    // for the player
    string player="";
     for(int i=0;i<m;i++){
        char as;
        cin>>as;
        player+=as;
    }

    for(int i=0;i<m;i++){
        if(player[i]=='V'){
            
            a=b[i]+a;
        }
        else{
            a+=b[i];
        }
    }
   cout<<a<<endl;

  }

    return 0;
}