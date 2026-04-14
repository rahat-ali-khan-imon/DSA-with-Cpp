/*
1 2 3 4 5 6 7 
  1 2 3 4 5 
    1 2 3 
      1   
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) {
            cout << "  ";                          // 2 space
        }
        for(int j = 1; j <= 2 * i - 1; j++) {
            cout << j << " ";                     // 1 space
        }
        cout << endl;
    }

    return 0;
}


/*
Key Difference
| Your Code           | Better Version     |
| ------------------- | ------------------ |
| `"   "`             | `"  "`             |
| `j < 2*i`           | `j <= 2*i - 1`     |
| double spacing risk | consistent spacing |
*/