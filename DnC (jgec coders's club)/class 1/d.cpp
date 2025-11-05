#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, N;
    cin >> n >> N;
    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    set<int> visited;
    for (int i = 0; i < n; i++) {
        int start = x[i];
        for (int j = start; j <= N; j += start) {
            visited.insert(j);
        }
    }
    cout << visited.size() << endl;
}
