#include<iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter any string: ";
    cin >> str;

    cout << str << endl;

    string s;
    cout << "Enter string: ";
    cin.ignore();
    getline(cin, s);

    cout << s << endl;

    return 0;

}