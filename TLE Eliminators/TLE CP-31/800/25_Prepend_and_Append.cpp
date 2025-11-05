#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int tt;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int l=0,r=n-1;
        while(l<r && s[l]!=s[r]){
            l++;
            r--;
        }
        cout<<r-l+1<<endl;
    }
    return 0;
}