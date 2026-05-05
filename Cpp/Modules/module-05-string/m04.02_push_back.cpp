#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    s.push_back('A');
    cout << s << endl; 

    s += 'B';
    cout << s << endl;

    cout << endl;

    string s2 = "Hello";
    s2[0] = 'G';
    cout << s2 << endl;

    // Index er baire jeye add or insert kra jabe na
    s2[s2.size()] = 'U';
    cout << s2 << endl;

    return 0;
}