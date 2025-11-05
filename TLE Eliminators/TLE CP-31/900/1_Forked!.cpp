#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
        int a,b;
		cin>>a>>b;
 
		int xk, yk;
		cin>>xk>>yk;
 
		int xq, yq;
		cin>>xq>>yq;

        vpii directions = {{a,b}, {a, -b}, {-a, b}, {-a, -b},
						   {b,a}, {b, -a}, {-b, a}, {-b, -a}};

        //Attacking positions for king.queen
        set<pii> st1,st2;
        for(auto d: directions){
			int x = xk + d.first;
			int y = yk + d.second;
			st1.insert({x,y});
 
			x = xq + d.first;
			y = yq + d.second;
			st2.insert({x,y});
		}

        int ans=0;
        //Attacking positions for queen
        for(auto pos: st1){
            if(st2.find(pos) != st2.end())
            ans++;
        }
        cout<<ans<<endl;                
    }
    return 0;
}