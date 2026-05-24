#include<iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = ++x;   //x=6......y=6
    int z = x++;  //z=6....(6+1)...x=7

    int a = 5;
    int b = a++;   //b=5...(5+1)...a=6
    int c = ++a;  //(6+1)...a=7...c=7

    cout << "X = " << x << endl;
    cout << "Y = " << y << endl;
    cout << "Z = " << z << endl << endl;

    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    cout << "C = " << c << endl;

    return 0;
}