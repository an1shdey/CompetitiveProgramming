#include <bits/stdc++.h>
using namespace std;

int hammingDistance(const string& str1, const string& str2) {
    int dist = 0;
    for (size_t i = 0; i < str1.size(); ++i) {
        if (str1[i] != str2[i]) {
            dist++;
        }
    }
    return dist;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, M;
        cin >> N >> M;
        string A, B;
        cin >> A >> B;
        
        int minDistance = M; // Worst case: all characters are different
        
        // Slide window over A
        for (int i = 0; i <= N - M; ++i) {
            string substrA = A.substr(i, M);
            int currentDistance = hammingDistance(substrA, B);
            minDistance = min(minDistance, currentDistance);
        }
        
        cout << minDistance << endl;
    }
    
    return 0;
}