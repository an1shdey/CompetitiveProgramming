#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((a[i]+b[j])%m==0) count+=1;
            }
        }
        cout<<count<<endl;
    }
}

/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool canFormPermutation(vector<int>& A) {
    int n = A.size();
    sort(A.begin(), A.end());  // Sort array A

    // Check if A[i] + i is a permutation of 1 to n
    for (int i = 0; i < n; ++i) {
        if (A[i] > n || A[i] <= 0 || A[i] != i + 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        // Check if there exists an array B such that C = A + B is a permutation
        bool possible = canFormPermutation(A);

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
*/