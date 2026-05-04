#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    s.resize(7);    // Hello W
    cout << "String resize s: " << s << endl;

    s.resize(25, 'A');  // Hello WAAAAAAAAAAAAAAAAAA
    cout << "String resize s: " << s << endl;

    return 0;
}