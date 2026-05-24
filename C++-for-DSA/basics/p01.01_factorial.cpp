/* Factorial number
n! = n(n - 1)(n - 2)(n - 3).......3 * 2 * 1
5! = 5 * 4 * 3 * 2 * 1
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << fact << endl;

    return 0;
}