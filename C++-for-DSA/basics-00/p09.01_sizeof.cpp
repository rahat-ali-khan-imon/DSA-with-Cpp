// Special operator sizeof()

#include<iostream>
using namespace std;

int main() {
    int a;
    float f;
    double d;
    char ch;
    char name[20];

    cout << "Size of character data type = " << sizeof(ch) << " byte" << endl;
    cout << "Size of integer data type = " << sizeof(a) << " byte" << endl;
    cout << "Size of floating data type = " << sizeof(f) << " byte" << endl;
    cout << "Size of double data type = " << sizeof(d) << " byte" << endl;
    cout << "Size of character type array = " << sizeof(name) << " byte" << endl;

    return 0;
}