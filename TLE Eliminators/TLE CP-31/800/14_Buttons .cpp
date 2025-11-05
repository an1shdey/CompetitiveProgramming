#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        if(a!=b){
            if(a>b) cout<<"First";
            else cout<<"Second";
        }
        else{
            if(c%2==0) cout<<"Second";
            else cout<<"First";
        }

        cout<<endl;
    }
    return 0;
}