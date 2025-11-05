#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	
	    int product=1;
	    while(product<=x){
	        product=product*2;
	    }
	    
	    int ans=0;
	    if(product == x) ans=0;
	    else ans=4*((x-(product/2))/2);
	    cout<<ans<<endl;    
	}
	
}
