/*
         A  
      A  B  C  
   A  B  C  D  E  
A  B  C  D  E  F  G 
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
            cout << char(j + 64) << "  ";                     // 2 space
        }
        cout << endl;
    }

    return 0;
}