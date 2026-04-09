#include<bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    cout << "Minimum number: " << min(n1, n2) << endl;
    cout << "Maximum number: " << max(n1, n2) << endl;

    swap(n1, n2);

    cout << "Swapping number: " << n1 << "\t" << n2 << endl;

    return 0;
}