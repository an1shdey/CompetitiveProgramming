#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> a(n);
        
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=k){
                k=k-a[i];
                a[i]=1;
            }
            else a[i]=0;
        }
        
        for(int i=0;i<n;i++) cout<<a[i];
        cout<<endl;
    }
}