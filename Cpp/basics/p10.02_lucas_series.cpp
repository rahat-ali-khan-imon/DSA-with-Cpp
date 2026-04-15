// Lucas Series : 2 1 3 4 7 11 18 29 47 76 ......

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long  a = 2, b = 1;

    for(int i = 0; i < n; i++) {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }

    return 0;
}


/*
🧠 Rule (Fibonacci এর মতোই)
👉 Difference শুধু starting values
    L(0) = 2
    L(1) = 1

এরপর:
    L(n) = L(n-1) + L(n-2)

🔍 Example
3 = 2 + 1
4 = 3 + 1
7 = 4 + 3
11 = 7 + 4
*/