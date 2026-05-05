// String assign s = and s.assign()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Hello";
    s1 = "Gello";
    cout << s1 << endl;

    string s2 = "Hi.!";
    s1 = s2;
    cout << s2 << endl;
    cout << s1 << endl;

    string s3;
    s3.assign(s1 + " " + "Say.. hi!");
    cout << s3 << endl;

    return 0;
}