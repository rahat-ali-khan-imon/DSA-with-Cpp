#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    switch(num % 2) {
        case 0:
            cout << "Even" << endl;
            break;
        case 1:
            cout << "Odd" << endl;
            break;
    }

    return 0;
}