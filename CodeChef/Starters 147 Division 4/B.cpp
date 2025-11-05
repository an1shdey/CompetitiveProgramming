#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int A, B, C;
        cin >> A >> B >> C;
        
        int maxi = max({A, B, C});

        // sum of the other two
        int sum = A + B + C - maxi;

        if (maxi > sum + 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}