#include<iostream>
using namespace std;

int main()
{
    // Character array (C-style string)
    // Size must be defined when using char array
    char name[20];

    /*
        ⚠️ Important:
        char name[];  // ❌ Error হবে কারণ size বা initial value দিতে হবে
    */

    cout << "Enter your name: ";

    // cin শুধু প্রথম word input নেয় (space পেলে stop করে)
    // Example: Rahat Ali → শুধু Rahat নিবে
    cin >> name;

    cout << "My name is " << name << endl;

    /*
        🔥 Alternative (Recommended in modern C++)
        string + getline ব্যবহার করলে space সহ input নেওয়া যায়
    */

    /*
    string name;
    getline(cin, name);

    cout << "Name: " << name << endl;
    */

    return 0;
}