#include <bits/stdc++.h>
using namespace std;

//Type names
#define int long long
using ll   = long long;
using ull = unsigned long long;
using ld   = long double;
using vi   = vector<ll>;
using vvi  = vector<vi>;
using pii  = pair<ll, ll>;
using vii  = vector<pii>;
using si   = set<ll>;
using mii  = map<ll, ll>;
using msi  = map<string, ll>;
using mci  = map<char, ll>;

//Macros
#define PI 2*acos(0.0) //3.141592653589793238462
#define sp ' '
#define nl '\n'
#define br cout<<'\n'
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
const ll INF = 9e18;
const int MOD = 1e9 + 7; //1000000007
const int NUM = 1000030;
const int N = 10000000;

//Debugger
#ifdef _DEBUG
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void _print(ll t) {cerr << t;}
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

//Helper functions
ll max(ll a,ll b) {if (a>b) return a; else return b;} //max{(a,b,c)} / *max_element(a.begin(),a.end())
ll min(ll a,ll b) {if (a<b) return a; else return b;} //min{(a,b,c)} / *min_element(a.begin(),a.end())
bool odd(ll num) {return((num&1)==1);}
bool even(ll num) {return((num&1)==0);}
bool prime(ll a) { if (a==1) return 0; for (ll i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
vector<bool> sieve(ll n){vector<bool>prime(n,1);prime[0]=prime[1]=0;for(ll i=2;i*i<n;i++)if(prime[i])for(ll j=i*i;j<n;j+=i)prime[j]=0;return prime;}
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);} //__gcd(a,b)
ll lcm(ll a,ll b) { return a/__gcd(a,b)*b; }
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
ll mod_inv(ll a, ll m) { return mod_expo(a, m - 2, m); } //Fermat's Little Theorem, only for prime m
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mod_div(ll a, ll b, ll m) { return mod_mul(a, mod_inv(b, m), m); }
//int fact[100];
//ll ncr(int n, int r) { return (r < 0 || r > n) ? 0 : mod_div(fact[n], mod_mul(fact[r], fact[n - r], m), m); }

/*---------------------------------------------------------------------------------------------------------------------------*/

ll n;

void cla1rvoyant(){
    int n,k;
    cin>>n>>k;

    int div=1;
    for(int i=1;i<=sqrt(n);i++){
        if(i>k) break;
        if(n%i == 0){
            div=max(div,i);
            if((n/i) <= k){
                div=max(div,n/i);
            }
        }
    }
    cout<<n/div<<endl;
}

int32_t main(){
/*
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
*/
#ifdef _DEBUG
    freopen("error.txt", "w", stderr);
#endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //int i=1;
    ll tt = 1;
    cin >> tt; //comment this out if no testcases
    while (tt--) {
        //cout << "Case #" << i << ": "; //for Google contests
        cla1rvoyant();
        //++i;
    }

    return 0;
}