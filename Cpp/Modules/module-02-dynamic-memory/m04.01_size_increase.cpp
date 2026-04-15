// Increase size of static array

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    cout << "Enter any three integer numer: ";

    for(int i = 0; i < 3; i++) {
        cin >> a[i];
    }

    int b[5];

    for(int i = 0; i < 3; i++) {
        b[i] = a[i];
    }

    b[3] = 40;
    b[4] = 50;

    cout << "B array print: ";
    for(int i = 0; i < 5; i++) {
        cout << b[i] << " ";
    }

    cout << endl;

    cout << "A array print: ";
    for(int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }

    return 0;
}