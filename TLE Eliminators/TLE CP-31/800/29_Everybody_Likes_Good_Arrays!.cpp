#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        vi a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int count=0;
        for(int i=0;i<n-1;i++){
            if((a[i]%2 != 0 && a[i+1]%2 != 0) || (a[i]%2 == 0 && a[i+1]%2 == 0)) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}