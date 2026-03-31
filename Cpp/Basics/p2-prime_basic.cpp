#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for(int i = 2; i < n; i++) {
        if(n % 2 == 0) {
            count++;
            break;
        }
    }

    if(count == 0) {
        cout << n << " is prime number" << endl;
    } else {
        cout << n << " is not prime number" << endl;
    }

    return 0;
}