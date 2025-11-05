#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 200'007;
const int MOD = 1'000'000'007;
 
int res[MAX];

int S(int x) {
    int res = 0;
    while (x) {
        res += (x % 10);
        x /= 10;
    }
    return res;
}

void solve() {
    int x;
    cin >> x;
    cout << res[x] << '\n';
}

int main(){
    res[0] = 0; 
    for (int i = 1; i < MAX; i++) {
        res[i] = res[i - 1] + S(i);
    }

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++) solve();
}


/*
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[1000000];
        int n,sum=0,total=0;
        cin>>n;
        for(int i=0;i<n;i++) arr[i]= i+1;
        for(int j=0;j<n;j++)
        {
            int a=arr[j],s;
            while(a>0){
                int ld=a%10;
                sum=sum+ld;
                s=a;
                a=a/10;
                if(a==0) a=s;
            }
            arr[j] = sum;
        }
        for(int k=0;k<n;k++) total=total+arr[k];
        cout<<total<<endl;
    }
}
*/