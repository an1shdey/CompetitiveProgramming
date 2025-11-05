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
		vi a(4);
	   	for(int i=0;i<4;i++) cin>>a[i];
		
		int count=0;

		int y=a[3]-a[1];
		for(int i=0;i<y;i++){
			a[0]++;
			a[1]++;
			count++;
		}
		int x=a[0]-a[2];
		for(int i=0;i<x;i++){
			a[0]--;
			count++;
		}

		if(a[0]==a[2] && a[1]==a[3]) cout<<count<<endl;
		else cout<<-1<<endl;
    }
    return 0;
}