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
       	int x,k;
		cin>>x>>k;

		if(x%k!=0) //if x is not divisble by k, then we can make only 1 jump to x
		{
			cout<<1<<endl;
			cout<<x<<endl;
		}
		else //if x is divisble by k, then x-1 definitely wont be divisible by k
		{
			cout<<2<<endl;
			cout<<x-1<<sp<<1<<endl;
		}
    }
    return 0;
}
