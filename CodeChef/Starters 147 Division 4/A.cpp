#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    
    int chef;
    if(x>y){
        chef=a;
    }
    else{
        chef=b;
    }
    cout<<chef;
}
