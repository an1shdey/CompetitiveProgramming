#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int total=0;
        while(a != b){
            if(a>b){
                int x=(a+1)/2;
                a-=x;
                total+=x;
            }else{
                int y=(b+1)/2;
                b-=y;
                total+=y;
            }
        }
        cout<<total<<'\n';
    }
}
