//Bitwise operator

#include<iostream>
using namespace std;

int main()
{
    int a = 32, b = 12, c;  
    //First take it to binary and then do AND, OR, NOT works to get decimal again from binary
    c = a & b;  //Bitwise &(AND)
    cout << c << endl;

    c = a | b;  //Bitwise |(OR)
    cout << c << endl;

    c = a ^ b;  //Bitwise ^(Ex-OR)
    cout << c << endl;

    return 0;
}