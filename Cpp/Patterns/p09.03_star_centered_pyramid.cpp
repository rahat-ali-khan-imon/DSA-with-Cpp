/*
         *  
      *  *  *  
   *  *  *  *  *  
*  *  *  *  *  *  *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << "   ";                          // 3 space
        }
        for(int j = 1; j < 2 * i; j++) {
            cout << "*" << "  ";                     // 2 space
        }
        cout << endl;
    }

    return 0;
}