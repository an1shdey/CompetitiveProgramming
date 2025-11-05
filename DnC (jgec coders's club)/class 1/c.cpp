#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, N;
    cin >> n >> N;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    vector<bool> visited(N + 1, false);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        if (!visited[x]) {
            for (int j = x; j <= N; j += x) {
                if (!visited[j]) {
                    visited[j] = true;
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
}
