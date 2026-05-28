// max() / min() with char or double

#include<bits/stdc++.h>
using namespace std;

int main() {
    char c1 = 'a', c2 = 'z';
    cout << max(c1, c2) << endl;    // z

    double d1 = 4.5, d2 = 6.7;  // 4.5
    cout << min(d1, d2) << endl;

    return 0;
}