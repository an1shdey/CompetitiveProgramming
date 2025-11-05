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

void solve(){
    string s; ll x,y; cin>>s>>x>>y;

    vi a = {s[0] - '0', s[1] - '0', s[3] - '0', s[4] - '0'};

    bool yes=false;
    //for(ll i=3;i>=0;i--){

        //m2
        if(a[3] == 0){
            a[3]=8;
            yes=true;
        }
        else if(a[3] == 1){
            a[3]=7;
            yes=true;
        }
        else if(a[3] == 3){
            a[3]=9;
            yes=true;
        }
        else if(a[3] == 5){
            a[3]=6;
            yes=true;
        }
        else if(a[3] == 6){
            a[3]=8;
            yes=true;
        }
        else if(a[3] == 7){
            //a[3]=1;
            /*if(a[2]>=5){
                a[2]=0;
            }else{
                a[2]+=1;
            }*/
            /*if(a[2] == 5){
                a[2]=6;
            }else{
                a[3]=1;
            }*/
            if(a[1] == 0){
                a[1]=8;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 1){
                a[1]=7;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 3){
                a[1]=9;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 5){
                a[1]=6;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 6){
                a[1]=8;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 7){
                //a[1]=1;
                /*if(a[0]>=1){
                    a[0]=0;
                }else{
                    a[0]+=1;
                }*/
                yes=true;
            }
            else if(a[1] == 8){
                a[1]=9;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 9){
                a[1]=3;
                /*if(a[2]>=5){
                    a[2]=0;
                }else{
                    a[2]+=1;
                }*/
                yes=true;
            }
            yes=true;
        }
        else if(a[3] == 8){
            a[3]=9;
            yes=true;
        }
        else if(a[3] == 9){
            //a[3]=3;
            /*if(a[2]>=5){
                a[2]=0;
            }else{
                a[2]+=1;
            }*/
            /*if(a[2] == 5){
                a[2]=6;
            }else{
                a[3]=3;
            }*/
            if(a[1] == 0){
                a[1]=8;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 1){
                a[1]=7;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 3){
                a[1]=9;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 5){
                a[1]=6;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 6){
                a[1]=8;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 7){
                //a[1]=1;
                /*if(a[0]>=1){
                    a[0]=0;
                }else{
                    a[0]+=1;
                }*/
                yes=true;
            }
            else if(a[1] == 8){
                a[1]=9;
                yes=true;
                /*if(a[0]>=1){
                    a[0]=0;
                    yes=false;
                }*/
            }
            else if(a[1] == 9){
                a[1]=3;
                /*if(a[2]>=5){
                    a[2]=0;
                }else{
                    a[2]+=1;
                }*/
                yes=true;
            }
            yes=true;
        }

        //m1
        /*else if(a[2] == 5 && a[3] == 0){
            a[2]=6;
        }*/

        //h2
        else if(a[1] == 0){
            a[1]=8;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 1){
            a[1]=7;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 3){
            a[1]=9;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 5){
            a[1]=6;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 6){
            a[1]=8;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 7){
            //a[1]=1;
            /*if(a[0]>=1){
                a[0]=0;
            }else{
                a[0]+=1;
            }*/
            yes=true;
        }
        else if(a[1] == 8){
            a[1]=9;
            yes=true;
            /*if(a[0]>=1){
                a[0]=0;
                yes=false;
            }*/
        }
        else if(a[1] == 9){
            a[1]=3;
            /*if(a[2]>=5){
                a[2]=0;
            }else{
                a[2]+=1;
            }*/
            yes=true;
        }

        //h1

    if(yes){
        cout << a[0] << a[1] << ":" << a[2] << a[3] << endl;    
    }else{
        cout<<"No closest valid time possible" << endl;
    }

    //cout << a[0] << a[1] << ":" << a[2] << a[3] << endl; //debug    
}