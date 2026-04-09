#include<bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    int num;
    cout << "Enter any integer number: ";
    cin >> num;
    getchar();  // Akti newline character (Enter key) input niche jate probti input nite problem na hy.

    cout << "Enter any string: ";
    cin.getline(str, 100);

    cout << "NUmber: " << num << endl;
    cout << "String: " << str << endl;

    return 0;
}