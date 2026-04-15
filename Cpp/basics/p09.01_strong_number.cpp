/* Strong number
145 = 1! + 4! + 5! = 145 is strong number
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, sum = 0;

    while(temp != 0) {
        int rem = temp % 10;
        int fact = 1;
        for(int i = 1; i <= rem; i++) {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }

    if(n == sum) {
        cout << n << " is a strong number" << endl;
    } else {
        cout << n << " is not a strong number" << endl;
    }

    return 0;
}