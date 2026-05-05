#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s);
    string word;

    ss >> word;
    cout << word << endl;       // Hello
    ss >> word;
    cout << word << endl;      // I
    ss >> word;
    cout << word << endl;      // am
    ss >> word;
    cout << word << endl;     // Mahmud
    ss >> word;
    cout << word << endl;   // Hossain

    return 0;
}

/*
Input:
Hello I am Mahmud Hossain Pias

Output:
Hello I am Mahmud Hossain Pias
Hello
I
am
Mahmud
Hossain

*/