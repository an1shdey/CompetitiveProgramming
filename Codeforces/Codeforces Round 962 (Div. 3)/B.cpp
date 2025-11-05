#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    int k;
    cin >> n >> k;
    string s[n];
    for (int i = 0 ; i < n ; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i += k){
        for (int j = 0; j < n; j += k){
            cout << s[i][j];
        }
        cout<<endl;
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