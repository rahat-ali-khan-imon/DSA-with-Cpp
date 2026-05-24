/*
A  
B  B  
C  C  C  
D  D  D  D
C  C  C
B  B
A
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

    for(int i = n - 1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << char(i + 64) << " ";
        }
        cout << endl;
    }

    return 0;
}