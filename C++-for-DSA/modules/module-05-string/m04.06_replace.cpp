// String s.replace()

#include<bits/stdc++.h> 
using namespace std;

int main() {
    string s = "Hello World!";
    s.replace(6, 6, "Bangladesh");
    cout << s << endl;

    string s2 = "Gello World!";
    s2.replace(6, 0, "Programming ");
    cout << s2 << endl;

    return 0;
}