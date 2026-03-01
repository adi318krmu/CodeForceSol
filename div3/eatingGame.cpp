#include<bits/stdc++.h>
using namespace std;
int main(){

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        cin >> n;

        int maxDishes = 0;
        int countMax = 0;

        for (int i = 0; i < n; i++) {
            int dishes;
            cin >> dishes;

            if (dishes > maxDishes) {
                maxDishes = dishes;
                countMax = 1;          // new maximum found
            }
            else if (dishes == maxDishes) {
                countMax++;            // same maximum again
            }
        }

        cout << countMax << endl;
    }

    return 0;
}