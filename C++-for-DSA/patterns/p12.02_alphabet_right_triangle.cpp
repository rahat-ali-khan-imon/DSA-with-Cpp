/*
        A   
      A   B   
    A   B   C   
  A   B   C   D   
A   B   C   D   E     
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";                       // 2 space
        }
        for(int j = 1; j <= i; j++) {
            cout << char('A' + j - 1) << "   ";               // 3 space
        }
        cout << endl;
    }

    return 0;
}