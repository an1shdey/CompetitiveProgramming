#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());

    int res=abs(a[0]);
    for(int i=0;i<n;i++){
        if(abs(a[i])<res) res=abs(a[i]); 
    }

    cout<<res<<endl;
    
    return 0;
}