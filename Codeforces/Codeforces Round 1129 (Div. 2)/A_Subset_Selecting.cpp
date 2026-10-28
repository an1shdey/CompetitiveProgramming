#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int mini = 0;
        for (int x : a) {
            if (x == mini) {
                mini++;
            } else if (x > mini) {
                break;
            }
        }

        cout << mini << '\n';
    }

    return 0;
}