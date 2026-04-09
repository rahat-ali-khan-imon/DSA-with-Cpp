/* Alphabet right angle triangle
A
B   B
C   C   C
D   D   D   D
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << char(i + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}