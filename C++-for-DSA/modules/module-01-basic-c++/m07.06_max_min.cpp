// max() / min() with expressions

#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 10, b = 20, c = 5;

    int largest = max(a, max(b, c));    // nested max
    int smallest = min(a, min(b, c));

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    cout << endl;

    cout << "Max: " << max({a, b, c}) << endl;
    cout << "Min: " << min({a, b, c}) << endl;

    return 0;
}