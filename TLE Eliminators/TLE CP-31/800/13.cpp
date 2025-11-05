#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<int> b;
        vector<int> c;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]%a[j]==0 || a[j]%a[i]==0){
                    b.push_back(a[i]);
                    b.push_back(a[j]);
                }
                else{
                    c.push_back(a[j]);
                } 
            }
        }

        cout<<b.size()<<c.size()<<endl;
        for(int i=0;i<n;i++){
            cout<<b[i];      
        }
        cout<<"\n";
        for(int i=0;i<n;i++){
            cout<<c[i];      
        }
        cout<<"\n";
        
    }
    return 0;
}