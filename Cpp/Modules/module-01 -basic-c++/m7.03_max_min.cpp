#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter any four integer number: ";
    cin >> a >> b >> c >> d;

    cout << "Max: " << max({a, b, c, d}) << endl;
    cout << "Min: " << min({a, b, c, d}) << endl;

    return 0;
}