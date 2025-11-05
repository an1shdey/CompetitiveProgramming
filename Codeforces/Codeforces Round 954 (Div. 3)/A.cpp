#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int x=abs(abs(a-a)+abs(b-a)+abs(c-a));
        int y=abs(abs(a-b)+abs(b-b)+abs(c-b));
        int z=abs(abs(a-c)+abs(b-c)+abs(c-c));

        if(x<y && x<z) cout<<x;
        else if(y<z) cout<<y;
        else cout<<z;

        cout<<endl;
    }
    return 0;
}