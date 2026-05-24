//Special operator sizeof()
//signed, unsigned = char, int;  long, short = int, double;  int = all use;

#include<iostream>
using namespace std;

int main()
{
    cout <<"Size of integer = " << sizeof(int) << endl;
    cout << "Size of short integer = " << sizeof(short int) << endl;
    cout << "Size of long integer = " << sizeof(long int) << endl;
    cout << "Size of signed integer = " << sizeof(signed int) << endl;
    cout << "Size of unsigned integer = " << sizeof(unsigned int) << endl << endl;

    cout << "Size of floating = " << sizeof(float) << endl << endl;

    cout << "Size of double = " << sizeof(double) << endl;
    cout << "Size of long double = " << sizeof(long double) << endl << endl;
    //cout<<"Size of short double = "<<sizeof(short double)<<endl<<endl;        //erroe dhekhai

    cout << "Size of character = " << sizeof(char) << endl;
    cout << "Size of signed character = " << sizeof(signed char) << endl;
    cout << "Size of unsigned character = " << sizeof(unsigned char) << endl << endl;

    cout << "Size of character name = " << sizeof(char[30]) << endl;

    return 0;
}