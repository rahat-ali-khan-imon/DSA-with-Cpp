// String s.empty()

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1; // Default empty string 
    string s2 = " "; // Not empty string 
    string s3 = ""; // Empty string;

    if(s1.empty()) {    // if(s1.empty() == true)  or  if(s1.size() == 0)
        cout << "S1: Empty String" << endl;
    } else {
        cout << "S1: Not Empty String" << endl;
    }

    if(s2.empty()) {
        cout << "S2: Empty String" << endl;
    } else {
        cout << "S2: Not Empty String" << endl;
    }

    if(s3.empty()) {
        cout << "S3: Empty String" << endl;
    } else {
        cout << "S3: Not Empty String" << endl;
    }

    return 0;
}