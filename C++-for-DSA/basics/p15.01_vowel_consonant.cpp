//Vowel and consonant use to toupper(char) or tolower(char)

#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    ch = tolower(ch);
    //ch = toupper(ch);

    //if(ch == 'A' || ch == 'E' || ch == 'I' || ch ==' O' || ch == 'U')
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        cout << "Vowel" << endl; 
    } else {
        cout << "Consonant" << endl;
    }

    return 0;
}