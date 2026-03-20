// //https://codeforces.com/problemset/problem/120/A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string dir;
//     cin >> dir;
//     int a;
//     cin >> a;

//     if(dir == "front" && a == 1){
//         cout << "L\n";
//     }
//     else if(dir == "front" && a == 2){
//         cout << "R\n";
//     }
//     else if(dir == "back" && a == 1){
//         cout << "R\n";
//     }
//     else if(dir == "back" && a == 2){
//         cout << "L\n";
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string dir;
    cin >> dir;
    int a;
    cin >> a;

    if ((dir == "front" && a == 1) || (dir == "back" && a == 2))
        cout << "L";
    else
        cout << "R";

    return 0;
}