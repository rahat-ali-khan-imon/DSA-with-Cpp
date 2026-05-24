// String s.insert()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";
    s.insert(6, "Pias");
    cout << s << endl; 

    string s2 = "Gello World!";
    s2.replace(6, 0, "Pias ");
    cout << s2 << endl;

    return 0;
}