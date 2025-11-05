#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0) cout<<"YES"; //since the sum  of odd numbers in even and also sum of even numbers is even so if the sum of all the numbers is even then it can be divided into 2 colors where each colors sum is even
        else cout<<"NO";

        cout<<endl;
    }
    return 0;
}