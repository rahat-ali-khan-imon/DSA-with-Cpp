// swap() strings

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "apple", s2 = "banana";

    cout << max(s1, s2) << endl;
    cout << min(s1, s2) << endl;

    swap(s1, s2);

    cout << s1 << " " << s2 << endl;

    return 0;
}