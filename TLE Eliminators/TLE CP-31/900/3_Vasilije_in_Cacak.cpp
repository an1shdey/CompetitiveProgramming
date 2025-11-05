#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define endl '\n'
#define E cout<<'\n'
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define SQ(a) (a)*(a)
#define sz(x) (int)(x).size()
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define RFOR(i,a,b) for (int i = a ; i>=b;i--)
#define TC int tt; cin >> tt; while (tt--)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

int n;

void solve(){
    ll n,k,x; cin>>n>>k>>x;

    //the sum of first n natural number is n(n+1)/2
    ll low = (k*(k+1))/2; //the sum of first k no. is k(k+1)/2
    ll high = (n*(n+1))/2 - ((n-k)*(n-k+1))/2; //the sum of last k no.(from n-k to n) = sum of n no.(from 1 to n is n(n+1)/2) - sum of no. till n-k(from 1 to n-k is n-k(n-k+1)/2)

    if(x>=low && x<=high) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TC{
        solve();
    }

    return 0;
}