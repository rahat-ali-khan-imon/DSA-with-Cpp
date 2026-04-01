/* Palindrome number
num = 121 & reverse = 121, then Palindrome
num = 133 & reverse = 331, then not Palindrome
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, sum = 0;

    while(temp != 0) {
        int rem = temp % 10;
        sum = sum * 10 + rem;
        temp /= 10;
    }

    if(n == sum) {
        cout << n << " is palindrome" << endl;
    } else {
        cout << n << " is not palindrome" << endl;
    }

    return 0;
}