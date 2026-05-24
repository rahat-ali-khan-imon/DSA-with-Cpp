#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    cout << *s.begin() << endl;         // H
    cout << *s.end() << endl;          // NULL
    cout << *s.end() - 1 << endl;     // -1
    cout << *(s.end() - 1) << endl;  // !

    return 0;
}