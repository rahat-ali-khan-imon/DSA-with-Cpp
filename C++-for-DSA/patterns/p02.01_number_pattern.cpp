/*
rew:4 ->    1   2   3   4
row:3 ->    1   2   3
roe:2 ->    1   2
row:1 ->    1
            c1  c2  c3  c4     
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}