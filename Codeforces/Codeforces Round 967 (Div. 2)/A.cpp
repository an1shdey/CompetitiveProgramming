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
    int min(int a,int b) {if (a<b) return a; else return b;}     //min() */
    int lcm(int a,int b) { return a/__gcd(a,b)*b; }
     
    //Helper functions
    bool odd(ll num) {return((num&1)==1);}
    bool even(ll num) {return((num&1)==0);}
    bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
     
    bool testcase=true;
    ll n;
     
    void solve(){
        int n;
        cin>>n;
        vi a(n);
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
     
        mii mp;
        for(auto it:a){
            mp[it]++;
        }
     
        int maxi=0;
        for(auto it:mp){
            int freq=it.se;
            maxi=max(freq,maxi);
        }
     
        cout<<n-maxi<<endl;
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
     
        if(testcase){
            tt{
                //write("Case #", i+1, ": ");
                solve();
            }
        }else solve();
     
        return 0;
    }