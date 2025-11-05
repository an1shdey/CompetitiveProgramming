#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        /*
        a -> aa -> aaaa -> aaaaaaaa -> 16 -> 32
              1     2          3        4     5

        since (1 <= n.m <= 25)
        try doing the operation 5 times 
        even after 5 ops, s is not part of x then print -1 
        because max size of s can be 25 so it should be inside x after 5 ops whose size will become 32 if not then its false
        */

        bool found=false;
        for(int ops=0;ops<=5;ops++){ //where ops is no, of operation
            if(x.find(s) != string::npos){ //string::npos is basically -1
                cout<<ops<<endl;
                found = true;
                break;
            }
            x+=x; // or x.append(x); to apply operation
        }
        if(!found) cout<<-1<<endl;
        
    }
    return 0;
}