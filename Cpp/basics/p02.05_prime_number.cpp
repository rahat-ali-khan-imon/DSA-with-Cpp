#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    bool isPrime = true;

    if(n <= 1) {
        isPrime = false;
    }

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout << "prime" << endl;
    else cout << "Not Prime" << endl;

    return 0;
}


/*
🔢 Prime Number কি?
👉 Prime number হলো এমন সংখ্যা:
    যাকে শুধু 1 এবং নিজে দিয়ে divide করা যায়
    অন্য কোনো divisor থাকলে → সেটা prime না

✅ Examples:
    2, 3, 5, 7 → Prime
    4, 6, 8, 9 → Not Prime

👉 Example:
7 → divisible by 1, 7 ✅ (prime)
8 → divisible by 1, 2, 4, 8 ❌ (not prime)


🧠 Basic Logic
একটা সংখ্যা n prime কিনা check করতে:

👉 2 থেকে n-1 পর্যন্ত divide করে দেখি
👉 যদি কোনো number দিয়ে divisible হয় → not prime
👉 না হলে → prime


💡 Example Walkthrough
ধরি n = 36
👉 check করবো:
    i = 2 → 36 % 2 == 0 ❌ → not prime (stop)

ধরি n = 37
👉 check:   
    2, 3, 4, 5, 6 → কোনোটা দিয়ে divide হয় না
    👉 √37 ≈ 6 পর্যন্ত check করলেই enough
    👉 so Prime ✅


🧠 Extra (Interview Tip)
👉 Special case:
    0, 1 → not prime
    2 → only even prime
*/