//Any number from 1 to 7 will print any of the 7 days

#include<iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter any 1 to 7 number: ";
    cin >> num;

    switch(num) {
    case 1:
        cout << "Saturday" << endl;
        break;
    case 2:
        cout << "Sunday" << endl;
        break;
    case 3:
        cout << "Monday" << endl;
        break;
    case 4:
        cout << "Tuesday" << endl;
        break;
    case 5:
        cout << "Wednesday" << endl;
        break;
    case 6:
        cout << "Thursday" << endl;
        break; 
    case 7:
        cout << "Friday" << endl;
        break;
    default:
        cout << "This is not a day" << endl;
    }

    return 0;
}