#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        
        int d,e,f;
        cin>>d>>e>>f;
        
        int sum1=a+b+c,sum2=d+e+f;
        if(sum1>sum2) cout<<"DRAGON";
        else if(sum1<sum2) cout<<"SLOTH";
        else if(sum1==sum2){
            if(a==d && b==e && c==f) cout<<"TIE";
            else if(a>d) cout<<"DRAGON";
            else if(a<d) cout<<"SLOTH";
            else if(b>e) cout<<"DRAGON";
            else if(b<e) cout<<"SLOTH";
            else if(c>f) cout<<"DRAGON";
            else if(c<f) cout<<"SLOTH";
        }
        cout<<endl;
    }
}