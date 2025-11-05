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
     
    int main() {
        int t;
        cin >> t;
        
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n);
            for (int i = 0; i < n; i++) {
                cin >> a[i];
            }
            
            int m;
            cin >> m;
            while (m--) {
                string s;
                cin >> s;
                
                // Check if the length of the string matches the size of the array
                if (s.size() != n) {
                    cout << "NO\n";
                    continue;
                }
                
                unordered_map<int, char> num_to_char;
                unordered_map<char, int> char_to_num;
                bool is_match = true;
                
                for (int i = 0; i < n; i++) {
                    if (num_to_char.count(a[i])) {
                        if (num_to_char[a[i]] != s[i]) {
                            is_match = false;
                            break;
                        }
                    } else {
                        num_to_char[a[i]] = s[i];
                    }
                    
                    if (char_to_num.count(s[i])) {
                        if (char_to_num[s[i]] != a[i]) {
                            is_match = false;
                            break;
                        }
                    } else {
                        char_to_num[s[i]] = a[i];
                    }
                }
                
                if (is_match) {
                    cout << "YES\n";
                } else {
                    cout << "NO\n";
                }
            }
        }
        
        return 0;
    }