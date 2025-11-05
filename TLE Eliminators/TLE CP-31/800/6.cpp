#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool x = 1;

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;

            if(mp.size() > 2){
                x=0;
            }
        }
        if(mp.size() == 2){
            int f= mp.begin()->second; // freq of 1st element

            if(f != n/2 && f != (n+1)/2)
                x=0;
        }

        if(x==1)cout<<"YES";
        else cout<<"NO";

        cout<<endl;

        /*
        map<int, int> count;
        set<int> shiz;
        for (int i = 0; i < n; i++)
        {
            shiz.insert(a[i]);
            count[a[i]]++;
        }
        if (shiz.size() == 2)
        {
            if (abs(count.begin()->second - count.rbegin()->second) <= 1)
            {
                f = 1;
            }
        }
        else if (shiz.size() == 1)
        f = 1;
        
        cout << f;
        cout << endl;
        */

    }
    return 0;
}