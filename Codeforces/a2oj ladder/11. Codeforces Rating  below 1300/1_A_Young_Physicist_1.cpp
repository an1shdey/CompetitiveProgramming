#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    float a1=0,b1=0,c1=0;
    while(tt--){
        float a,b,c;
        cin>>a>>b>>c;
        a1+=a;
        b1+=b;
        c1+=c;
    }
    if(a1==0 && b1==0 && c1==0) cout<<"YES";
    else cout<<"NO";

    return 0;
}