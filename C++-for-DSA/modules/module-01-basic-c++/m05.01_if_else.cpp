#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any number: ";
    cin >> num;

    if(num % 2 == 0) {
        cout << "Even\n" << endl;
    } else {
        cout << "Odd\n" << endl;
    }

    
    (num % 2 == 0) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}