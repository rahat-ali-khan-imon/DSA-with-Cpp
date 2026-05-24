#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hi, Welcome";

    s.resize(25);   // Hi, Welcome    Size: 25
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;
    s.resize(20, 'A');  // Hi, Welcome    Size: 20
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;
    s.resize(30, 'D');  // Hi, WelcomeDDDDDDDDDD  Size: 30
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;

    return 0;
}