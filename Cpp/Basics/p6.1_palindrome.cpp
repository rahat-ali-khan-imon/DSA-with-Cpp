#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n < 0) {
        cout << "Not Palindrome";
        return 0;
    }

    int original = n;
    int reverse = 0;

    while(n != 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if(original == reverse) cout << "Palindrome";
    else cout << "Not Palindrome";

    return 0;
}


/*
🔢 Palindrome Number কি?
👉 এমন number যেটা উল্টা করলেও same থাকে

✅ Examples:
    121 → reverse = 121 ✅ palindrome
    1331 → reverse = 1331 ✅
    123 → reverse = 321 ❌ not palindrome

🧠 Logic
👉 idea খুব simple:
    original number save করো
    number reverse করো
    compare করো:
        same → palindrome
        different → not palindrome


⚠️ Edge Case (Important)
🔴 Negative Number
👉 -121 palindrome না (because reverse = 121)

👉 handle করতে চাইলে:
    if(n < 0) {
        cout << "Not Palindrome";
        return 0;
    }


🧠 Interview Tips

👉 Important points:
reverse logic reuse হয় 🔥
overflow case (advanced) consider করা যায়
string দিয়েও করা যায় (easy way)
*/