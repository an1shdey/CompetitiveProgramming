#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<pair<int, int>> op;
    
    int mid = n / 2, r = n;
    
    bool found_zero = false;
    for (int i = mid; i < n; i++) {
        if (a[i] == 0) {
            found_zero = true;
            break;
        }
    }
    if (found_zero) {
        op.push_back({mid + 1, n});
        r -= (n - mid - 1);
    }
    
    found_zero = false;
    for (int i = 0; i < mid; i++) {
        if (a[i] == 0) {
            found_zero = true;
            break;
        }
    }
    if (found_zero) {
        op.push_back({1, mid});
        r -= (mid - 1);
    }
    
    op.push_back({1, r});
    
    cout << op.size() << "\n";
    for (const auto& o : op) {
        cout << o.first << " " << o.second << "\n";
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