#include <bits/stdc++.h>
using namespace std;
 
int main(){
   	int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        int a=0,b=0;
        for(int i=0;i<3;i++){
            a=a+s[i];
        }
        for(int i=3;i<6;i++){
            b=b+s[i];
        }
        if(a==b) cout<<"YES";
        else cout<<"NO";

        cout<<endl;
    }
    return 0;
}