    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    #define sp ' '
    #define vi vector<int>
     
    int n;
     
    int main(){
        ios_base::sync_with_stdio(0);
        cin.tie(0);
     
        ll tt;
        cin>>tt;
        while(tt--){
            cin>>n;
     
            for(int i=1;i<=n;i++){
                cout<<i<<sp;
            }
            cout<<endl;
        }
        return 0;
    }