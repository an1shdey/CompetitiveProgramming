#include <bits/stdc++.h>
using namespace std;

#define sp ' '
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;

int n,k;

void solve(){
	cin>>n>>k;
	string s;
	cin>>s;

	map<char, int> mp;
   	for(auto ch:s)	
	   mp[ch]++;
	
	int odd=0;
	for(auto it:mp){
		int freq=it.second;
		if(freq%2!=0)
			odd++;
	}
	if(k < odd-1) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--)
        solve();
}
