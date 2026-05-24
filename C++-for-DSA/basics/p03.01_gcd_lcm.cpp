// GCD = Greatest Common Divisor
// LCM = Least Common Multiple

#include<bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int n1 = num1, n2 = num2;

    while(n2 != 0) {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    int gcd = n1;
    int lcm  = (num1 * num2) / gcd;

    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
