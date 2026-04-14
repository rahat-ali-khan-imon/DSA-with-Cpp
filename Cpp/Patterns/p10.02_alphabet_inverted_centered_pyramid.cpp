/*
A B C D E F G 
  A B C D E 
    A B C 
      A   
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {

        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";                           // 2 space
        }

        // characters
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << char('A' + j - 1) << " ";         // 1 space
        }

        cout << endl;
    }

    return 0;
}