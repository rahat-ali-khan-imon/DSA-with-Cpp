#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;

    while(n > 0) {
        int digit = n % 10;   // last digit
        sum += digit;        // add to sum
        n /= 10;            // remove last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}


/*
🔢 Problem
👉 একটা positive integer input নিবে
👉 তারপর তার digits গুলোর sum বের করবে


🧠 Logic (Very Important)
ধরি number = 1234

👉 আমরা করবো:
    last digit বের করবো → n % 10 → 4
    number ছোট করবো → n / 10 → 123

👉 আবার:
    123 % 10 = 3
    123 / 10 = 12
👉 এভাবে loop চলবে যতক্ষণ না n = 0


💡 Extra (Best Practice)
👉 যদি user negative number দেয় (just in case):
    n = abs(n);
*/