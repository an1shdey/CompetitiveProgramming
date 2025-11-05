#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll tc, k;

ll MOD = 1e9 + 7;

ll dp[100005]; // memoization array
// each dp cell will be filled at most once. Therefore, we only have almost size of DP nodes

ll solve(ll n) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    // memoization
    if (dp[n] != -1) // means it has been visited before
        return dp[n]; // this is the solution for solve(n)

    return dp[n] = (solve(n - k) + solve(n - 1)) % MOD; // memoire and return
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(dp, -1, sizeof(dp)); // sets all values to -1 in dp
    // memset with anything other than 0 or -1 DOES NOT WORK

    cin >> tc >> k;

    // precomputation using prefix sums
    ll pre[100005]; pre[0] = solve(0);
    for (ll i = 1; i < 100005; i++)
        pre[i] = (pre[i-1] + solve(i)) % MOD;

    while (tc--) {
        int a, b;
        cin >> a >> b;

        /*
        ll sum = 0;
        for (int i = a; i <= b; i++) { // b times
            sum = (sum + solve(i)) % MOD;
        }
        O(b^2) = 10^10 => TLE
        */

        cout << (pre[b] - pre[a-1] + MOD) % MOD << endl; // mod to avoid negative
    }
}

// O(2^n + n) -> O(n)