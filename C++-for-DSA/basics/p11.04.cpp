#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = --x;   //(5-1)...x=4....y=4
    int z = x--;  //z=4....(4-1)...x=3

    int a = 5;
    int b = a--;   //b=5...(5-1)...a=4
    int c = --a;  //(4-1)...a=3...c=3

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl << endl;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;

    return 0;
}