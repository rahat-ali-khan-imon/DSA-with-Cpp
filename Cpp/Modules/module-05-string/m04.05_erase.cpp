// String s.erase()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";
    s.erase(5);
    cout << s << endl;

    string s2 = "Gello World!";
    s2.erase(3, 2);
    cout << s2 << endl;

    return 0;
}