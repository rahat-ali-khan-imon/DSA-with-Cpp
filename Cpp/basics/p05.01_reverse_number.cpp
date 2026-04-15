/* Reverse a number
123 = 321
456 = 654
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

    cout << "Reverse number: " << sum << endl;

    return 0;
}


/*
##> sum *= 10 + rem;
sum = sum * (10 + rem);
যা completely wrong result দিবে ❗


✅ Correct Logic
Reverse করার rule হলো:
👉 আগের result × 10 + নতুন digit


Input: 123

Step:
sum = 0
→ 0*10 + 3 = 3
→ 3*10 + 2 = 32
→ 32*10 + 1 = 321


🎯 Final Verdict
❌ sum *= 10 + rem; → wrong
✅ sum = sum * 10 + rem; → correct
*/