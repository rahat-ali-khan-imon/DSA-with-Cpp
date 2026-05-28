#include<iostream>
using namespace std;

int main() {
    // Unary operators: ++ and --

    int x = 5;

    // Pre-increment: আগে value increase, তারপর assign
    int y = ++x;  
    // x = 6, y = 6

    int a = 5;

    // Post-increment: আগে assign, তারপর value increase
    int b = a++;  
    // b = 5, a = 6

    int p = 5;

    // Pre-decrement: আগে decrease, তারপর assign
    int q = --p;  
    // p = 4, q = 4

    int c = 5;

    // Post-decrement: আগে assign, তারপর decrease
    int d = c--;  
    // d = 5, c = 4

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl << endl;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl << endl;

    cout << "P = " << p << endl;
    cout << "Q = " << q << endl << endl;

    cout << "C = " << c << endl;
    cout << "D = " << d << endl << endl;

    return 0;
}