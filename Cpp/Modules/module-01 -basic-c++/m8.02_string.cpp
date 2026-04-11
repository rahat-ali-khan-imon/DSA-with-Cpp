#include<iostream>
using namespace std;

int main() {
    char str[100];
    cin >> str;
    cout << str << endl;

    
    string s;
    cin.ignore();
    getline(cin, s);
    cout << s << endl;

    return 0;

}