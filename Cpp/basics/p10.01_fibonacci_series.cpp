// Fibonacci Series : 0 1 1 2 3 5 8 13 21 34 55..........

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long  a = 0, b = 1;

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}


/*
Fibonacci Series কি?
Series:
    0 1 1 2 3 5 8 13 21 34 55 ...

👉 Rule:
প্রথম দুইটা number fixed:
    F(0) = 0
    F(1) = 1
এরপর:
    F(n) = F(n-1) + F(n-2)

👉 Example:
2 = 1 + 0
3 = 2 + 1
5 = 3 + 2
*/