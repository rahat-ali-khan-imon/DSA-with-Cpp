// Example 1: Read integers until EOF
// EOF -> End of File occurs when there's no more input to read
// cin automatically detects EOF and stops reading

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter any integer number: " << endl;

    while(cin >> n) {   // Reads until EOF
        cout << n << endl;
    }

    return 0;
}