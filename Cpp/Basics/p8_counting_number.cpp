/* Counting number of a digit in an integer
num = 123 = 3 number
num = 123456789 = 9 number
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;

    while(n != 0) {
        n /= 10;
        cnt++;
    }

    cout << "Total number of digits: " << cnt << endl;

    return 0;
}