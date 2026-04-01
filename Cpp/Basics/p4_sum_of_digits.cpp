// What a program that read any positive integer and display sum of digits

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int temp = n, sum = 0;

    while(temp != 0) {
        int rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}