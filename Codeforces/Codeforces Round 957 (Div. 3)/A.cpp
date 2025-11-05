#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define endl '\n' // '\n'(newline) is better than endl(endline) for CP
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
#define tt int tt; cin >> tt; while (tt--)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

ll n;

void solve(){
    tt{
        vector<int> arr(3);
        for (int i = 0; i < 3; ++i) cin >> arr[i];

        sort(arr.begin(), arr.end());

        for (int i = 0; i < 5; ++i) {
            arr[0]++;
            sort(arr.begin(), arr.end());
        }

        cout << arr[0] * arr[1] * arr[2] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();

    return 0;
}