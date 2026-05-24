// Increase size of dynamic array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int* a = new int[3];
    int* b = new int[5];

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    b[3] = 40, b[4] = 50;
    delete[] a;

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