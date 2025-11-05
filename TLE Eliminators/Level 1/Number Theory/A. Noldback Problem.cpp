#include <bits/stdc++.h>
using namespace std;

bool isprime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int j = 2; j <= sqrt(num); j++) {
        if (num % j == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k; cin >> n >> k;

    vector<int> prime;
    for (int i = 2; i <= n; i++) {
        bool flag = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) prime.push_back(i);
    }

    int ans = 0;
    for (int i = 0; i < prime.size(); i++) {
        if (i + 1 < prime.size()) { // to avoid out of bounds
            int num = 1 + prime[i] + prime[i + 1];
            if (isprime(num) && num <= n) ans++;
        }
    }

    /* OR    
    for (int i = 0; i < prime.size() - 1; i++) { // i till second last element
        int num = 1 + prime[i] + prime[i + 1];
        if (isprime(num) && num <= n) ans++;
    } */

    if (ans >= k) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}
