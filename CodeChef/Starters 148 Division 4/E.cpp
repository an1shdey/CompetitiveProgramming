#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            pq.push(x);
        }

        while (k--) {
            long long min = pq.top();
            pq.pop();
            pq.push(min * 2);
        }

        long long sum = 0;
        while (!pq.empty()) {
            sum = (sum + pq.top()) % MOD;
            pq.pop();
        }

        cout << sum << endl;
    }
}
