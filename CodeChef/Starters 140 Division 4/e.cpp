#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        for(int i=1;i<=n;i++){
            a.push_back(i);
        }
        

    }
}

/*
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n);
        vector<int> b(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        
        // Map to count occurrences of each remainder when (Ai + Bj) % m
        unordered_map<int, int> remainderCount;
        
        // Count remainders of chocolates
        for (int j = 0; j < n; ++j) {
            int b_mod = b[j] % m;
            if (b_mod < 0) b_mod += m;
            remainderCount[b_mod]++;
        }
        
        int ways = 0;
        
        // Check each candy and calculate required remainder
        for (int i = 0; i < n; ++i) {
            int a_mod = a[i] % m;
            if (a_mod < 0) a_mod += m;
            
            int needed_remainder = (m - a_mod) % m;
            
            if (remainderCount.find(needed_remainder) != remainderCount.end()) {
                ways += remainderCount[needed_remainder];
            }
        }
        
        cout << ways << endl;
    }
    
    return 0;
}
*/