#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int count=0;
        if(z>x*y) cout<<0;
        else {
            while(z<x*y){
                count++;
                x--;
            }
            cout<<count;
        }
        cout<<endl;
    }
}
