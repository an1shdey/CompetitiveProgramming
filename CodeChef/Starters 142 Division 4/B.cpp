#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        
        if((y-x >= 0 && y-x <= 2) || x-y==1) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
