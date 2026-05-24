#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int reverse = 0;

    while(n != 0) {
        int digit = n % 10;              // last digit
        reverse = reverse * 10 + digit;  // build reverse
        n /= 10;                         // remove digit
    }

    cout << "Reversed number: " << reverse << endl;

    return 0;
}