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
#define TC int tt; cin >> tt; while (tt--)

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

ll n;

void Rotate(int arr[], int d, int n)
{
    // Storing rotated version of array
    int temp[n];
 
    // Keeping track of the current index
    // of temp[]
    int k = 0;
 
    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++) {
        temp[k] = arr[i];
        k++;
    }
 
    // Storing the first d elements of array arr[]
    //  into temp
    for (int i = 0; i < d; i++) {
        temp[k] = arr[i];
        k++;
    }
 
    // Copying the elements of temp[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void solve(){
    TC{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }

        if(n==1){
            if(m==1) cout<<"-1"<<endl;
            else{
                int temp[m];
                for(int i=0;i<m;i++) temp[i]=a[0][i];
                Rotate(temp,1,m);
                for(int i=0;i<m;i++){
                    cout<<temp[i]<<sp;
                }
            }
        }
        else{
            int b[n][m];
            b[n-1][m-1]=a[0][0];
            for(int i=0;i<n-1;i++){
                for(int j=0;j<m;j++){
                    b[i][j]=a[i+1][j+1];
                    b[n-1][j]=a[0][j+1];
                    b[i][m-1]=a[i+1][0];
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cout<<b[i][j]<<sp;
                }
                cout<<endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    solve();

    return 0;
}