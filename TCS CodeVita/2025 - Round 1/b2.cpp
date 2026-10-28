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
typedef vector<tuple<ll,ll,string>> vtlls;


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


ll n, q;
si ss;
vtlls mov;

void moves(map<ll,pii>& pp, map<pii,ll>& sq, vtlls& mov) {
    bool yes=false;

    string di;
    ll a,b;
    for0(i,sz(mov)){
        tie(a,b,di) = mov[i];

        if(yes == false){
            pp[a]={0,0};
            sq[{0,0}]=a;

            yes=true;
        }

        auto p=pp[a];
        ll x=p.ff, y=p.ss;
        //cout<<x<<sp<<y<<endl;

        if(di=="left"){
            x--;
        }else if(di=="right"){
            x++;
        }else if(di=="top"){
            y++;
        }else if(di=="down"){
            y--;
        }
        // cout<<di<<endl;
        if(sq.count({x,y})){
            ll res=sq[{x,y}];
            pp.erase(res);
        }

        sq[{x,y}] = b;
        // debug(sq);
        pp[b] = {x,y};
        // debug(pp);
    }
}


void solve() {
    cin>>n;
    
    map<pii,ll> sq; map<ll,pii> pp;

    for(ll i=0;i<n;i++){
        ll a,b; cin>>a>>b;
        string di; cin>>di;

        ss.insert(a); ss.insert(b);
        mov.pb({a,b,di});
    }
    sort(all(mov));
    moves(pp, sq, mov);

    
    // Queries
    cin>>q;

    pii p=pp[q];
    ll x=p.ff;
    ll y=p.ss;
    // cout<<x<<sp<<y<<endl;

    vi ans(4, -1);

    if(sq.count({x-1, y})) 
        ans[2]= sq[{x-1, y}]; // left
    if(sq.count({x+1, y})) 
        ans[3]= sq[{x+1, y}]; // right
    if(sq.count({x, y+1})) 
        ans[0]= sq[{x, y+1}]; // top
    if(sq.count({x, y-1})) 
        ans[1]= sq[{x, y-1}]; // down

    if(!pp.count(q)){
        cout<<-1<<sp<<-1<<sp<<-1<<sp<<-1<<endl;
        return;
    }

    for(auto it:ans) 
        cout<<it<<sp;
    nl;
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

    ll tt = 1;
    //cin >> tt; // Uncomment if multiple test cases exist

    while (tt--) {
        solve();
    }

    return 0;
}