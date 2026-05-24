/*
            1     
         1     2     
      1     2     3     
   1     2     3     4     
1     2     3     4     5     
   1     2     3     4     
      1     2     3     
         1     2     
            1           
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            cout << "   ";                       // 3 space
        }
        for(int j = 1; j <= i; j++) {
            cout << j << "     ";               // 5 space
        }
        cout << endl;
    }    

    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << "   ";                       // 3 space
        }
        for(int j = 1; j <= i; j++) {
            cout << j << "     ";               // 5 space
        }
        cout << endl;
    }

    return 0;
}