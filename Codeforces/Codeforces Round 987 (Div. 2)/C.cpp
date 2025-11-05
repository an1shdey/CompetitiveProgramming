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
typedef map<char, int> mci;

//Macros
#define sp ' '
#define pi 2*acos(0.0)
#define endl '\n'
#define nl cout<<'\n'
#define fi first
#define se second
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
#define tt int tt; cin >> tt; while (tt--)
/*
int gcd(int a,int b) {if(a==0) return b; return gcd(b%a,a);} //__gcd(a,b)
int max(int a,int b) {if (a>b) return a; else return b;}     //max(a,b) / *max_element(a.begin(),a.end());
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


bool testcase=1;
ll n;

void solve(){
    int n;
    cin>>n;
    if(n%2 != 0 && n<27){
        cout<<-1<<endl;
        return;
    }


    else{
        if(n%2 == 0){
            for(int i=1;i*2<=n;i++){
                cout<<i<<sp<<i<<sp;
            }
            nl;
        }
        else{
            vi v = {1, 2, 2, 3, 3, 4, 4, 5, 5, 1, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 13, 13, 1, 12};
            for(int i=0;i<27;i++){
                cout<<v[i]<<sp;
            }
            for(int i=27;i<n;i+=2){
                cout<<i<<sp<<i<<sp;
            }
        }
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

    if(testcase){
        tt{
            //write("Case #", i+1, ": ");
            solve();
        }
    }else solve();

    return 0;
}