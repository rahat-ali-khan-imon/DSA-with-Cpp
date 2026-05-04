#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Hello World!";
    string s2;

    cout << "Not empty string: " << endl;
    cout << (s1.empty()? "true" : "false") << endl;
    cout << (s1.empty()? "Yes" : "No") << endl << endl;

    cout << "Empty string: " << endl;
    cout << (s2.empty() ? "true" : "false") << endl;
    cout << (s2.empty() ? "Yes" : "No") << endl << endl;

    string s3;  // Default empty string 
    string s4 = " ";  // Not empty string 
    string s5 = "";  // Empty string;

    if(s3.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    if(s4.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    if(s5.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}