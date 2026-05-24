/*
* 
* * 
*   * 
*     * 
* * * * *
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || i == j || i == n) {
                cout << "* ";                           // 1 space
            }  else {
                cout << "  ";                          // 2 space
            }
        }
        cout << endl;
    }

    return 0;
}