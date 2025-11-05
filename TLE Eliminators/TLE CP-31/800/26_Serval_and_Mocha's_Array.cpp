#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;

        vi a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        bool good=false;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(__gcd(a[i],a[j])<=2){
                    good=true;
                    break;
                }
            }
        }
        if(good) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

/*
Assume gcd(a,b)<=min(a,b)
then,  gcd(a,b,c)<=min(a,b,c) OR we can say gcd(a,b,c)<=gcd(a,b)
so, adding of new element cannot increase gcd

We just have to find a pair whose gcd(a,b)<=2 then, we can put it at the start and it doesnt matter what new element you take it will be <=2 and the prefixes will be good
*/