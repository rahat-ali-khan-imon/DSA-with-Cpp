// Example 2: Read lines until EOF
// Reads multiple full lines, stopping at EOF

#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;

    while(getline(cin, line)) {
        cout << "Line: " << line << endl;
    }

    return 0;
}