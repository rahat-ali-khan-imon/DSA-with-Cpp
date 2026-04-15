#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    ch = tolower(ch);

    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')? cout << "Vowel" << endl : cout << "Consonant" << endl;

    return 0;
}