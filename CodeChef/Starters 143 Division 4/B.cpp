#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        int ans=0;
        if(n==x){
            for(int i=1;i<=n;i++){
                ans=ans+pow(2,i);
            }
        }
        else{
            for(int i=n;i>0;i--){
                if(x==0){
                    ans=ans-pow(2,i);
                }
                else{
                    ans=ans+pow(2,i);
                    x--;
                }
            }
        }
        cout<<ans<<endl;
    }
}