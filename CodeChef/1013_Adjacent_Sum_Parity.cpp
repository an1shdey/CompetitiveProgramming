#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            sum+=b[i];
        }
        
        if(sum % 2 == 0) cout<<"YES";
        else cout<<"NO";
        cout<<"\n";
        
    }
}
