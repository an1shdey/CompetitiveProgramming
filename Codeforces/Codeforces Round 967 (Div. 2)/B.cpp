    #include <bits/stdc++.h>
    using namespace std;
     
    // Type names
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
     
    // Macros
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
     
    bool testcase = true;
     
    void solve() {
        int n;
        cin >> n;
     
        if (n % 2 == 0) {
            cout << -1 << endl; 
            return;
        }
     
        vi a(n, -1);  
     
        int middle = n / 2;
        a[middle] = 1;       
     
        int l = middle - 1; 
        int r = middle + 1;
        int num = 2; 
     
        while (l >= 0 || r < n) {
            if (r < n) {
                a[r++] = num++;
            }
            if (l >= 0) {
                a[l--] = num++;
            }
        }
     
        for (int i = 0; i < n; i++) {
            cout << a[i] << sp;
        }
        nl;
    }
     
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        if (testcase) {
            tt {
                solve();
            }
        } else solve();
     
        return 0;
    }