#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int popcountll(ll x) {
    return __builtin_popcountll(x);
}

ll min2(ll r) {
    if (r == 0) return 2;
    if (popcountll(r) >= 2) return r;
    int k = 0;
    while ((r >> k) & 1) k++;
    return r + 2 * (1LL << k);
}

ll compute_sk(int k, ll n, ll x) {
    int xor_ones = (n - k) & 1;
/*
OA channel : @codingsolnsss

Contest solutions: @codingsolnss
*/
    ll r = x ^ xor_ones;
    if (k == 1) {
        return r > 0 ? r : -1;
    }
    if (k == 2) {
        return min2(r);
    }
    if (r == 0 && k == 3) {
        return 6;
    }
    return popcountll(r) >= k ? r : -1;
}

ll solve_case(ll n, ll x) {
    if (n == 1) {
        return x > 0 ? x : -1;
    }
    ll ans = LLONG_MAX;
    int maxk = min<ll>(n, 30);
    for (int k = 1; k <= maxk; k++) {
        ll sk = compute_sk(k, n, x);
        if (sk >= 0) {
            ll val = (n - k) + sk;
            ans = min(ans, val);
        }
    }
    return ans == LLONG_MAX ? -1 : ans;
}

vector<pair<ll,ll>> read_input() {
    int t;
    cin >> t;
    vector<pair<ll,ll>> v;
    v.reserve(t);
    ll n, x;
    while (t--) {
        cin >> n >> x;
        v.emplace_back(n, x);
    }
    return v;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    auto cases = read_input();
    for (auto &cx : cases) {
        cout << solve_case(cx.first, cx.second) << "\n";
    }
    return 0;
}