/*
*   *   *   *   *   
  *   *   *   *   
    *   *   *   
      *   *   
        *           
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";                       // 2 space
        }
        for(int j = 1; j <= i; j++) {
            cout << "*" << "   ";               // 3 space
        }
        cout << endl;
    }

    return 0;
}