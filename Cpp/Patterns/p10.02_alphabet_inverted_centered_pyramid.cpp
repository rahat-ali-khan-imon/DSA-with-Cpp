/*
A B C D E F G 
  A B C D E 
    A B C 
      A   
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {

        // spaces
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";                           // 2 space
        }

        // characters
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << char('A' + j - 1) << " ";         // 1 space
        }

        cout << endl;
    }

    return 0;
}


/*
🧠 'A' বা '0' মানে কী?
👉 'A' বা '0' মানে হচ্ছে: character itself (letter/digit)
👉 এটা সরাসরি ASCII value না


⚡ কিন্তু ভিতরে কী ঘটে?
C++ এ প্রতিটা character এর একটা ASCII value থাকে:
| Character | ASCII Value |
| --------- | ----------- |
| `'A'`     | 65          |
| `'0'`     | 48          |


💡 তাহলে confusing part
👉 যখন তুমি লেখো:
    char c = 'A';

✔ এখানে 'A' মানে character
✔ কিন্তু memory তে store হয় ASCII 65


👉 তাই দুটো জিনিস সত্য:
1️⃣ Human level'A' = letter A
'0' = digit zero

2️⃣ Computer level
'A' = 65
'0' = 48


🔥 Important rule
👉 'A', '0' = character literal
👉 but internally = ASCII number

🧠 Example
char c = 'A';
cout << c << endl;

👉 Output:
A

cout << (int)'A';

👉 Output:
65


⚡ Same for '0'
cout << (int)'0';

👉 Output:
48

🚀 Real usage in patterns
'A' + 1 = 'B'
'A' + 2 = 'C'

👉 কারণ ASCII math কাজ করে


💡 Final Summary
| Expression | Meaning              |
| ---------- | -------------------- |
| `'A'`      | character A          |
| `'0'`      | character zero       |
| internally | ASCII value (65, 48) |


🔥 Bottom line
👉 তুমি যখন 'A' দেখো:
✔ mentally ভাবো character
✔ internally C++ এটাকে number হিসেবে use করে



🧠 char('A' + j - 1) কীভাবে কাজ করে?
👉 এটা basically ASCII arithmetic + type casting

🔢 Step-by-step breakdown
ধরি:
j = 1;

👉 Step 1
'A' + j - 1

➡️ replace value:
'A' + 1 - 1
= 'A' + 0

👉 'A' এর ASCII = 65
65 + 0 = 65

👉 Step 2
char(65)

👉 65 আবার convert হয়ে যায়:
'A'


⚡ Example table
| j | Expression | ASCII | Output |
| - | ---------- | ----- | ------ |
| 1 | 'A'+0      | 65    | A      |
| 2 | 'A'+1      | 66    | B      |
| 3 | 'A'+2      | 67    | C      |
| 4 | 'A'+3      | 68    | D      |


💡 Why -1?
👉 কারণ:
j starts from 1
কিন্তু ASCII offset starts from 0

So:
j=1 → A
j=2 → B

🧠 Visual understanding
'A' + 0 = A
'A' + 1 = B
'A' + 2 = C

🚀 Real meaning of line
char('A' + j - 1)

👉 meaning:
“A থেকে শুরু করে j-th letter print করো”


🔥 Why this is better than j+64?
| Method        | Status                 |
| ------------- | ---------------------- |
| `j + 64`      | ⚠️ works but not clean |
| `'A' + j - 1` | ✅ best practice        |


💡 Interview tip
👉 Interviewer expects:
'A' + index

NOT:
+64 magic number ❌


🧠 Final summary
👉 এই line মানে:
A থেকে শুরু করে alphabet increment করা

👉 internally:
ASCII math → then convert to char


🔥 Bottom line
✔ 'A' + j - 1 = safest + clean + standard way
✔ pattern problem এর core trick
*/