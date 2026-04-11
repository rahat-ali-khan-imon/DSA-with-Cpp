#include<bits/stdc++.h>
using namespace std;

// factorial function
int fact(int x) {
    int f = 1;
    for(int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n;
    cin >> n;

    int original = n;
    int sum = 0;

    while(n != 0) {
        int digit = n % 10;
        sum += fact(digit);
        n /= 10;
    }

    if(sum == original) {
        cout << "Strong Number";
    } else {
        cout << "Not Strong Number";
    }

    return 0;
}


/*
🔢 Strong Number কি?
👉 যে number এর প্রতিটা digit এর factorial এর sum = original number

✅ Example:
145

👉 breakdown:
    1! + 4! + 5!
    = 1 + 24 + 120
    = 145 ✅
👉 so, 145 is Strong Number

❌ Example:
123

1! + 2! + 3!
= 1 + 2 + 6
= 9 ≠ 123 ❌


🧠 Logic
প্রতিটা digit বের করো (n % 10)
digit এর factorial বের করো
sum করো
compare with original number



⚠️ Important Notes
👉 factorial of digit:
    0! = 1
    1! = 1
👉 negative number → not considered strong
*/