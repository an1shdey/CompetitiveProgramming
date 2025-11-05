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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());
        bool x=true;
        for (int i = 0; i < n; i++) {
            if (a[i] > i + 1) {
                x= false;
            }
        }
        
        if(x==true) cout<<"YES";
        else cout<<"NO";
        
        cout<<endl;
    }
}
