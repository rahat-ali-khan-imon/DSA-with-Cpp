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
    int digits = to_string(n).size();

    while(temp != 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(n == sum) {
        cout << n << " is a armstrong number" << endl;
    } else {
        cout << n << " is not a armstrong number" << endl;
    }

    return 0;
}


/*
🔍 Step by Step Explanation
1️⃣ to_string(n)
👉 number কে string এ convert করে

Example:
n = 153
to_string(n) = "153"


2️⃣ .size()
👉 string এর length (digit count) বের করে
"153".size() = 3
digits = 3


3️⃣ pow(rem, digits)
👉 digit এর power নেয়
pow(rem, digits) = rem^digits


❗ কেন এটা important?
তুমি আগে লিখেছিলে:
sum += rem * rem * rem;
👉 এটা শুধু 3-digit number এর জন্য কাজ করে ❌

👉 এখন:
153 ✔️
9474 ✔️
1634 ✔️
সব Armstrong check হবে 🔥


🎯 Final বুঝো
👉 to_string(n).size() → digit count
👉 pow(rem, digits) → digit^digit_count


💡 Pro Tip:
👉 pow() double return করে, তাই safe version:
sum += (int)pow(rem, digits);
*/