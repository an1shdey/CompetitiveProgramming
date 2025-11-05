#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        x--; y--;
        vector<int> a(n);
        int cur=-1;
        for(int i=x+1;i<n;i++){
            a[i]=cur;
             cur=-cur;
        }
        cur=-1;
        for(int i=y-1;i>=0;i--){
            a[i]=cur;
            cur=-cur;
        }
        for(int i=y;i<=x;i++) a[i]=1;
        for(int i=0;i<n;i++) cout<<a[i]<<' ';
        
        cout << "\n";
    }
    return 0;
}