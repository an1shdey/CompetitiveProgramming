#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        
        int ans=0,gun=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            
            if(x>d && gun==0){
                gun=1;
                ans+=1;
            }
            else if(x<=d && gun==1){
                gun=0;
                ans+=1;
            }
        }
        cout<<ans<<'\n';
    }
}
