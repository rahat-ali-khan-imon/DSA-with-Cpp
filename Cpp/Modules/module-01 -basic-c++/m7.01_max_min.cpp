/* ✅ Summary Table
| Type           | `max()` / `min()`     | `swap()` |
| -------------- | --------------------- | -------- |
| `int`          | ✅                     | ✅        |
| `char`         | ✅                     | ✅        |
| `float/double` | ✅                     | ✅        |
| `string`       | ✅ (lexical)           | ✅        |
| `vector`       | ❌ (need max\_element) | ✅        |
| `pair`         | ✅ (lexical compare)   | ✅        |
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter any two number: ";
    cin >> num1 >> num2;

    cout << "Minimum number: " << min(num1, num2) << endl;
    cout << "Maximum number: " << max(num1, num2) << endl;

    swap(num1, num2);

    cout << "Swaping number: " << num1 << "\t" << num2 << endl;

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    cout << min(n1, n2) << " " << max(n1, n2) << endl;

    swap(n1, n2);

    cout << n1 << " " << n2 << endl;

    return 0;
}


##>-----------------------------------


#include<bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter any two number: ";
    cin >> num1 >> num2;

    int mx_val = max(num1, num2);

    cout << mx_val << endl;
    cout << min(num1, num2) << endl;

    swap(num1, num2);

    cout << num1 << "\t" << num2 << endl;

    return 0;
}
*/