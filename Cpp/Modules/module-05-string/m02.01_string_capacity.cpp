// String s.size(), s.max_size(), s.capacity()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World!";

    cout << "String length or size: " << s.size() << endl;
    cout << "String length: " << s.length() << endl;
    cout << "Maximum size: " << s.max_size() << endl;
    cout << "Capacity: " << s.capacity() << endl;

    return 0;
}