#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        
        int a=n/2,p=0;
        if(n%2 != 0){
            int b=n%2;
            p=(a*y) + (b*x);
        }
        else{
            p=a*y;
        }
        
        int q=n*x;
        
        if(p>q) cout<<p;
        else cout<<q;
        
        cout<<endl;
    }
}
