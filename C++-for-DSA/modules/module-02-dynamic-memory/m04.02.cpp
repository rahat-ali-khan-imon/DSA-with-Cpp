#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[3], b[5];

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    b[3] = 40, b[4] = 50;

    cout << "Array of B: ";
    for(int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    cout << "Array of A: ";
    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }

    return 0;
}