// Manually max() / min()

#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    int mx_val = INT_MIN;
    int mn_val = INT_MAX;

    for(size_t i = 0; i < v.size(); i++) {
        mx_val = max(v[i], mx_val);
        mn_val = min(v[i], mn_val);
    }

    cout << "Maximum value: " << mx_val << endl;
    cout << "Minimum value: " << mn_val << endl;

    return 0;
}