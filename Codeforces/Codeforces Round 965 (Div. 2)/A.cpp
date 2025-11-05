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
int min(int a,int b) {if (a<b) return a; else return b;}     //min() */
int lcm(int a,int b) { return a/__gcd(a,b)*b; }

//Helper functions
bool odd(ll num) {return((num&1)==1);}
bool even(ll num) {return((num&1)==0);}
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }

ll n;

void solve(){
    int xc,yc,k;
    cin>>xc>>yc>>k;

    int a=k*xc;
    for(int i=1;i<k;i++){
        a+=i;
    }
    //int x=a+(k-1);
    int b=k*yc;
    for(int i=1;i<k;i++){
        b+=i;
    }
    //int y=b+(k-1);

    cout<<a<<sp<<b<<endl;
    for(int i=1;i<k;i++){
        int j=-i;
        cout<<j<<sp<<j<<endl;
    }
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