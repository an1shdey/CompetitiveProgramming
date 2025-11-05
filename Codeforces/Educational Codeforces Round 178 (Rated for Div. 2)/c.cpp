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

void solve() {
    cin>>n;
    string str;
    cin >> str;

    ll alice_cnt = 0, bob_cnt = 0;
    
    bool pos1 = (str[0] == 'A');
    bool pos_n = (str[n - 1] == 'A');
    bool pos_n1 = (str[n - 2] == 'A');
    
    if (pos1) alice_cnt++; 
    else bob_cnt++;

    if (pos_n) alice_cnt++; 
    else bob_cnt++;

    if (pos_n1) alice_cnt++; 
    else bob_cnt++;

    bool ok = false;
    if (alice_cnt < 2) {
        cout << "Bob";    
    } 
    else{
        if (pos1 and pos_n1 and !pos_n) {
            for (int i = 1; i < n - 2; i++) {
                if (str[i] == 'B') {
                    ok = true;
                    break;
                }
            }
            if (ok) cout << "Bob";
            else cout << "Alice";
        } 
        else cout << "Alice";
    }
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
    cin >> tt;
    while (tt--) {
        solve();
    }

    return 0;
}
