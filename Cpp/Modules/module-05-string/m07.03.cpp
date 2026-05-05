#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    cout << s << endl;

    stringstream ss(s);
    string word;

    while(ss >> word) {
        cout << word << endl;
    }
     
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