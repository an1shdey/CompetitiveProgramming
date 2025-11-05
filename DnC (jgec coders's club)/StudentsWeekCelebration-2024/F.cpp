#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
     long long n,k;
    cin>>n>>k;
    long long a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        a[i]=a[i-1]+a[i];
    }
    long long ans=0;
    long long d=LLONG_MAX;
    for(int i=0;i<n;i++){
        if((k-a[i])<0) break; 
        d= (k-a[i])/(i+1)+1 ;
        ans+=(d);
    }
    cout<<ans;
    cout<<endl;
    }
return 0;
}