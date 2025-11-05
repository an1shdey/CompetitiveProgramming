#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int tt;
        cin>>tt;
        float sum=0;
        float a[tt];
        for(int i=0;i<tt;i++){
            cin>>a[i];
            if(a[i]<0) a[i]=-a[i];
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}