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
#define pi 2*acos(0.0)
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
    int n;
    cin>>n;
    
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x%2 == 0)even++;
        else odd++;
    }

    if(odd == even) cout<<odd;
    else if(odd == 0) cout<<0;
    else cout<<even;
    nl;
    
    /*int n;
    cin>>n;
    vi a(n);
    vi e,o;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2 == 0) e.pb(a[i]);
        else o.pb(a[i]);
    }

    int odd=o.size(),even=e.size();

    int ans=0;
    if(odd == even){
        ans=odd;
        sort(all(e));
        sort(all(o));
        if(e[even-1] > (o[odd-1]+e[even-2])) ans+=1;
    }
    else if(odd == 0 || even==0) ans=0;
    else{
        ans=even;
        sort(all(e));
        sort(all(o));
        if(o[odd-1] > (e[even-1]+o[odd-2])) ans+=1;
    }

    cout<<ans<<endl;
    */
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