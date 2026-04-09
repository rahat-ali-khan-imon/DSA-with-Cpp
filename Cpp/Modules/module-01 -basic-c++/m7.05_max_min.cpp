// max() / min()

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    int mx_val = INT_MIN;
    int mn_val = INT_MAX;

    while(n--) {
        int val;
        cin >> val;

        mx_val = max(val, mx_val);
        mn_val = min(val, mn_val);
    }

    cout << "Minimum value: " << mn_val << endl;
    cout << "Maximum value: " << mx_val << endl;

    return 0;
}