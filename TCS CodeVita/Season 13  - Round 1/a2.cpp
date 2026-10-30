#include <bits/stdc++.h>
using namespace std;

//Type names
typedef long long ll;
typedef long double ld;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef vector<pii> vii;
typedef set<ll> si;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef map<char, ll> mci;

//Macros
#define sp ' '
#define pi 2*acos(0.0)
#define endl '\n'
#define nl cout<<'\n'
#define ff first
#define ss second
#define pb push_back
#define pob pop_back
#define mp make_pair
#define sq(a) (a)*(a)
#define sz(x) (int)(x).size()
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)

//Constant Variables
const ll inf = 9e18;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;
/*
int gcd(int a,int b) {if(a==0) return b; return gcd(b%a,a);} //__gcd(a,b)
int max(int a,int b) {if (a>b) return a; else return b;}     //max(a,b) / *max_element(a.begin(),a.end())
int min(int a,int b) {if (a<b) return a; else return b;}     //min(a,b) */
int lcm(int a,int b) { return a/__gcd(a,b)*b; }

//Helper functions
bool odd(ll num) {return((num&1)==1);}
bool even(ll num) {return((num&1)==0);}
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

//Debugger
#ifdef _DEBUG
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


ll n;

// 0 -> 8
// 1 -> 7
// 2 -> -1
// 3 -> 9
// 4 -> -1
// 5 -> 6
// 6 -> 5 
// 7 -> 1
// 8 -> 9
// 9 -> 3
map<ll,ll> mpp={
    {0, 0b1111110}, 
    {1, 0b0110000}, 
    {2, 0b1101101}, 
    {3, 0b1111001},
    {4, 0b0110011}, 
    {5, 0b1011011}, 
    {6, 0b1011111}, 
    {7, 0b1110000},
    {8, 0b1111111}, 
    {9, 0b1111011}
};

bool func(ll a,ll b){
    ll _xor= mpp[a] ^ mpp[b];
    return __builtin_popcount(_xor)==1;
}

vvi time(vi d){
    vvi a;
    
    for(ll i=0;i<4;i++){
        for(ll j=0;j<10;j++){
            if(j==d[i]) 
                continue;
            
            if(func(d[i],j)){
                vi tmp=d;
                tmp[i]=j;

                ll h= tmp[0]*10 + tmp[1];
                ll m= tmp[2]*10 + tmp[3];
                if(h>=1 && h<=12 && m>=0 && m<=59){
                    a.pb(tmp);
                    //debug(tmp);
                }
            }
        }
    }

    return a;
}

ll cost(vi d, vi it, ll x, ll y){
    ll h1=d[0]*10 + d[1]; 
    ll h2=it[0]*10 + it[1];

    ll m1=d[2]*10 + d[3];
    ll m2=it[2]*10 + it[3];


    ll a=abs(h1-h2);
    ll b=abs(m1-m2);
    return a*x*60 + b*y;
}

void solve(){
    string s; ll x,y; cin>>s>>x>>y;

    vi d={
        s[0]-'0', 
        s[1]-'0', 
        s[3]-'0', 
        s[4]-'0'
    };
    //debug(d);

    vvi a=time(d);

    if(a.empty()){
        cout<<"No closest valid time possible"<<endl;
        return;
    }

    vi ans;
    ll mini=LLONG_MAX;    
    for0(i, sz(a)) {
        ll c=cost(d, a[i], x,y);
        //debug(a[i]); 
        //cerr<<sp<<c<<endl;
        if(c < mini){
            mini=c;
            //debug(mini);
            ans=a[i];
        }
    }

    cout<<ans[0]<<ans[1]<<":"<<ans[2]<<ans[3]<<endl;
}

int main(){
/*
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
#ifdef _DEBUG
    freopen("Error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int i=1;
    ll tt = 1;
    //cin >> tt;
    while (tt--) {
        //cout << "Case #" << i << ": ";
        solve();
        //++i;
    }

    return 0;
}
