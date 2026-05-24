//Unary operator

#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = ++x;  //(5+1)...x=6...y=6

    int a = 5;
    int b = a++;  //b=5...(5+1)...a=6

    int p = 5;
    int q = --p;  //(5-1)...p=4...q=4

    int c = 5;
    int d = c--;  //d=5...(5-1)...c=4

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