#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll n;
ll a[21];
ll total_sum = 0;

// returns the minimal difference if I am at index i, and my current set sum is current_sum
ll solve(ll i=0, ll current_sum=0){
    if (i == n) {
        ll other_set_sum = total_sum - current_sum;
        return abs(current_sum - other_set_sum);
    }

    return min(solve(i + 1, current_sum + a[i]), solve(i + 1, current_sum));
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    cin >> n;

	for (ll i = 0; i < n; i++)
        cin >> a[i], total_sum += a[i];

    cout << solve() << endl;
}