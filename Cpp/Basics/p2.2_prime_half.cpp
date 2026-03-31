#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            count++;
            break;
        }
    }

    if(!count) {
        cout << n << " is prime number" << endl;
    } else {
        cout << n << " is not prime number" << endl;
    }

    return 0;
}