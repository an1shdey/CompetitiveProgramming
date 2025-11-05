#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int min_diff=a[0]-a[1];
        for(int j=0;j<n;j++){
            min_diff = abs(a[j+1]-a[j]);
        }
        cout<<abs((min_diff/2)+1)<<endl;
    }
    return 0;
}