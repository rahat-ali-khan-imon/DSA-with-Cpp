#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b);
    int l = (a * b) / g;

    cout << "GCD: " << g << endl;
    cout << "LCM: " << l << endl;

    return 0;
}


/*
🔵 GCD (Greatest Common Divisor)
👉 দুইটা সংখ্যার common divisor গুলোর মধ্যে সবচেয়ে বড়টাই GCD

Example:
    12 → divisors: 1,2,3,4,6,12
    18 → divisors: 1,2,3,6,9,18
👉 common: 1,2,3,6
👉 GCD = 6


🟢 LCM (Least Common Multiple)
👉 দুইটা সংখ্যার common multiple গুলোর মধ্যে সবচেয়ে ছোটটাই LCM

Example:
    12 → 12,24,36,48...
    18 → 18,36,54...
👉 common: 36
👉 LCM = 36

🧠 Important Formula
👉 GCD আর LCM এর relation:
    LCM(a, b) = (a * b) / GCD(a, b)


🚀 Best Method → Euclidean Algorithm (GCD)
👉 খুব fast & efficient
Logic:
    gcd(a, b) = gcd(b, a % b)
👉 যখন b = 0 → answer = a


⚡ Dry Run Example
ধরি:
    a = 12, b = 18

GCD:
    gcd(12,18)
    → gcd(18,12)
    → gcd(12,6)
    → gcd(6,0)
    → answer = 6

LCM:
    LCM = (12 * 18) / 6 = 36
*/