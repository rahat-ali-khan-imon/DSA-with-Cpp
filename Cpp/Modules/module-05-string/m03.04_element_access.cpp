 // String element access index diye, s[i] and s.at()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    cout << s[0] << " " << s[2] << " " << s[7] << endl;
    cout << s.at(11) << endl;

    return 0;
}