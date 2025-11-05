#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        
        int a=0,b=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U') b++;
            else if(s[i]=='D') b--;
            else if(s[i]=='R') a++;
            else if(s[i]=='L') a--;
        }
        
        int moves=abs(x-a)+abs(y-b);
        if(moves==n) cout<<"Yes";
        else if(moves<n){
            int diff=n-moves;
            if(diff%2==0) cout<<"Yes";
            else cout<<"No";
        }
        else cout<<"No";
        cout<<endl;
    }
}
