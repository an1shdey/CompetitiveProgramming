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
       	int n,k,x;
	   	cin>>n>>k>>x;
		
		if(x!=1){
			cout<<"YES"<<endl;
			cout<<n<<endl;
			for(int i=0;i<n;i++) cout<<1<<sp;
		}else{
			if(k==1) cout<<"NO"<<endl;
			else{
				//k>=2
				if(n%2==0) //if n is even
				{ 
					cout<<"YES"<<endl;
					cout<<n/2<<endl;
					for(int i=0;i<n/2;i++) cout<<2<<sp;
				}else //if n is odd
				{
					if(k>=3){
						cout<<"YES"<<endl;
						cout<<n/2<<endl;
						for(int i=0;i<(n/2)-1;i++) 
							cout<<2<<sp;
						cout<<3<<endl;
					}
					else cout<<"NO"<<endl;
				}
			}
		}
		cout<<endl;
    }
    return 0;
}
