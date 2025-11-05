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
        ll n,k;
        cin>>n>>k;
        if(n%2==0) //n is even
            cout<<"YES";
        else //n is odd
        {
            if(k%2 != 0) //k is odd
                cout<<"YES";
            else cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}