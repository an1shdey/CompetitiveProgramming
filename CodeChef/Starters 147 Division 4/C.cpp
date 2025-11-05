#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        if(n>m){
            cout<<(2*m)+1;
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
}
