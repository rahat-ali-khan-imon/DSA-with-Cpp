#include<iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter any string: ";   // programming is fun
    cin >> str;

    cout << str << endl;
    // cout << str;

    string s;
    // cin.ignore();
    getline(cin, s);

    cout << s << endl;

    return 0;

}