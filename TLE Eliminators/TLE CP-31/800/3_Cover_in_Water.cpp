#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]== '.' && a[i+1]=='.' && a[i+2]=='.' ){
                x=2; //since if any 1 is filled then we can use the action 2 multiple times to fill the other empty cells so min times we have to use action 1 will be 2
                break;
            }
            else if(a[i]=='.') x+=1;
        }

        cout<<x<<endl;
    }
    return 0;
}