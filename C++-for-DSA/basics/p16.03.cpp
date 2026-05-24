//Find the vowel/consonant program using switch statment

#include<iostream>
#include<cctype>
using namespace std;

int main() {
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    ch = tolower(ch);
    switch(ch) {
    case 'a':
    case 'e':
    case 'i':   //multiple satement
    case 'o':
    case 'u':
        cout << "Vowel" << endl;
        break;
    default:
        cout << "Consonant" << endl;
    }

    /*switch(ch){
    case 'a':
        cout << "Vowel";
        break;
    case 'e':       //single ststement
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";
    }*/

    return 0;
}