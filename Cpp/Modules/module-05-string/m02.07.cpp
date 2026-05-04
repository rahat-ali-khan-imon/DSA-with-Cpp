#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hi, Welcome";

    s.resize(25);   // Hi, Welcome
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;
    s.resize(20, 'A');  // Hi, Welcome
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;
    s.resize(30, 'D');  // Hi, WelcomeDDDDDDDDDD
    cout << "String resize s: " << s << "\tSize: " << s.size() << endl;

    return 0;
}