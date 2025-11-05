#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string original="Timur";
        sort(original.begin(),original.end());
        sort(s.begin(),s.end());
        if(s==original){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
    }
return 0;
}