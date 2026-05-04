// String s.back() and s.front() character access

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    cout << "String last/back character access s.back():" << s.back() << endl;  // Easy
    cout << "String last/back character access index: " << s[11] << endl;
    cout << "String last/back character access index: " << s[s.size() - 1] << endl;

    cout << "String first character access s.front: " << s.front() << endl;
    cout << "String first character access index: " << s[0] << endl;  // Easy

    return 0;
}