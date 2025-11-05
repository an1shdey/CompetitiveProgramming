#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    long long x, y;
    cin >> x >> y;
    if (x == y) {
        cout << -1 << "\n";
    } else {
        cout << (1LL << 48) - max(x, y) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}