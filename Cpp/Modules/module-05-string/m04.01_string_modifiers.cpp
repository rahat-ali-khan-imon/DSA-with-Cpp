// String s += , s1.append(s2)

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s1 = "Hello World! "; 
    string s2 = "Say, Hi!";

    s1 += s2;

    cout << "String append: " << s1 << endl;

    string s3 = "Say, Hi.! ";
    string s4 = "C++ programming";

    s3.append(s4);

    cout << "String s3.append(s4): " << s3 << endl;
    
    return 0;
}