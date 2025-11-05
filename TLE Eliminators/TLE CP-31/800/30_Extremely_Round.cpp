#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int n;

bool check(int x){
    string s=to_string(x); //convert the no. to string
    int cnt=0; //count non-zero digits
    for(char c : s){
        if(c != '0'){
            cnt++;
        }
    }
    return cnt == 1; //return true if only 1 non-zero digit, then extremely round
    /* 
    OR  
    if(cnt==1) return true;
    else return false;
    */
}

int main(){    
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*
    extremely round numbers are rare, so we can iterate through 
    all numbers from 1 to 999999 once, remember which ones are extremely round, store 
    them into an array, and while answering the test case, only check the numbers from the
    array we have created
    */
    vi a;
    for(int i=1;i<1000000;++i) {
        if(check(i)) // OR if(check(i)==true)
        {
            a.push_back(i);
        }
    }

    ll tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        int ans=0;
        for(int x : a) //iterate through vector a
        {
            if(x<=n){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
