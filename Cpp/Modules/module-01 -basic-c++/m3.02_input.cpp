#include<iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter integer number: ";
    cin >> x;
    cout << x << endl;

    char ch;
    cout << "Enter character number: ";
    cin >> ch;
    cout << ch << endl;

    char c1, c2;
    cout << "Enter any two character: ";
    cin >> c1 >> c2;

    int ascii = c1; // ASCII value
    cout << "ASCII value print: " << ascii << "\t" << (int)c2 << endl;

    int y;
    cout << "Enter any number: ";
    cin >> y;

    // ASCII character
    cout << "ASCII character print: " << (char)y << endl;

    return 0;
}