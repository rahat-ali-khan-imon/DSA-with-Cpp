#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    int cnt = 0;

    if(n == 0 && d == 0) {
        cout << "count = 1";
        return 0;
    }

    n = abs(n);

    while(n != 0) {
        int digit = n % 10;
        if(digit == d) {
            cnt++;
        }
        n /= 10;
    }

    cout << "Count = " << cnt << endl;

    return 0;
}