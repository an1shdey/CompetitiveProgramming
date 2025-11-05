#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int i,a,b,c,s=0;
    cin>>i;
    while(i--){
        cin>>a>>b>>c;
        if ((a==1&&b==1) || (a==1&&c==1) || (b==1&&c==1)) s++;
    }
    cout<<s;
}
