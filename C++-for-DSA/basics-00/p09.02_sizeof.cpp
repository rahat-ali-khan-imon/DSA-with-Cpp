// Special operator sizeof()

#include<iostream>
using namespace std;

int main() {
    cout << "Size of character data type  = " << sizeof(char) << " byte" << endl;
    cout << "Size of integer data type    = " << sizeof(int) << " byte" << endl;
    cout << "Size of floating data type   = " << sizeof(float) << " byte" << endl;
    cout << "Size of double data type     = " << sizeof(double) << " byte" << endl;
    cout << "Size of char type array      = " << sizeof(char[30]) << " byte" << endl;

    return 0;
}