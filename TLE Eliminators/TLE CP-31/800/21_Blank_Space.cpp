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

		vi a(n);
		int count=0,max=0;
		for(int i=0;i<n;i++){
            cin>>a[i];
			if(a[i]==0){
				count++;
				if(count>max) max=count;
			}
			else count=0;
		}
		cout<<max<<endl;
    }
    return 0;
}
