#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n;
map<int, int> prev_values;

int query(int index) {
    if (prev_values.find(index) != prev_values.end())
        return prev_values[index];

    cout << "? " << index << endl;
    int value; 
    cin >> value;
    return prev_values[index] = value;
}

signed main() {
    cin >> n;

    int l = 0, r = n + 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        (query(m - 1) > query(m)) ? (l = m) : (r = m);
    }

    cout << "! " << l << endl;
}


