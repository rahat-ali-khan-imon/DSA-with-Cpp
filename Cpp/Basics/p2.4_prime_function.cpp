#include<bits/stdc++.h>
using namespace std;

int is_prime(int n) {
    int count = 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            count++;
            break;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    int result = is_prime(n);

    if(!result) {
        cout << n << " is prime number" << endl;
    } else {
        cout << n << " is not prime number" << endl;
    }

    return 0;
}