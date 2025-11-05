#include <bits/stdc++.h>
using namespace std;

//Type names
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;

//Macros
#define sp ' '
#define endl '\n' // '\n'(newline) is better than endl(endline) for CP
#define nl cout<<'\n'
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sq(a) (a)*(a)
#define sz(x) (int)(x).size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
#define tt int tt; cin >> tt; while (tt--)
/*
int gcd(int a,int b) {if(a==0) return b; return gcd(b%a,a);} //__gcd()
int max(int a,int b) {if (a>b) return a; else return b;}     //max()
int min(int a,int b) {if (a<b) return a; else return b;}     //min()
*/
//Helper fucntion
bool odd(ll num) {return((num&1)==1);}
bool even(ll num) {return((num&1)==0);}

ll n;

void solve(){
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    bool same=false;
    sort(a.begin(),a.end());
    int x=a[n-1];
    for(int i=0;i<n-1;i++){
        if(x==a[i] || a[i]==0) same=true;
        else{
            same=false;
            break;
        }
    }
    if(same) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
/*
#ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
#endif
*/
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    tt{
        //write("Case #", i+1, ": ");
        solve();
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        int mn = *max_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) mn = min(mn, a[i]);
        }
        cout << (mn == mx ? "Yes" : "No") << endl;
    }
}

*/