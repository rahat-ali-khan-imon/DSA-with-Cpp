/* How to check an armstrong number
num = 153 = 1^3 + 5^3 + 3^3 = 153 is armstrong number
num = 370, 371, & 407 is armstrong number

num = 399 = 3^3 + 9^3 + 9^3 =  is not armstrong number
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, sum = 0;

    while(temp != 0) {
        int rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp /= 10;
    }

    if(n == sum) {
        cout << n << " is a armstrong number" << endl;
    } else {
        cout << n << " is not a armstrong number" << endl;
    }

    return 0;
}