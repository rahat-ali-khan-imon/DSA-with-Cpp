#include<bits/stdc++.h>
using namespace std;

int main() {
    char c1, c2;
    cout << "Enter any two character: ";
    cin >> c1 >> c2;

    int ascii = c1;
    cout << ascii << endl;  // ASCII value
    cout << (int)c2 << endl;  // type cast

    int n;
    cout << "Enter any integer number: ";
    cin >> n;

    cout << (char)n << endl; // ASCII character

    return 0;
}