//Bitwise operator

#include<iostream>
using namespace std;

int main()
{
    int a = 32, b;

    b = a >> 3;   // Bitwise Right Shift   (>> a/2^n)
    cout << b << endl;  // b = 4

    b = a << 3;   // Bitwise Left Shift    (<< a*2^n)
    cout << b << endl;  // b = 256

    return 0;
}