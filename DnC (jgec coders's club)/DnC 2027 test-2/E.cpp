#include <bits/stdc++.h>
using namespace std;
 
int main(){
   	int t;
    cin>>t;
    while(t--){
        float a[4][2];
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
            }
        }
        int x=0;
        for(int i=0;i<4;i++){
            if(a[0][0]==a[i][0]){
                x=i;
            }
        }
        int s=abs(a[0][1]-a[x][1]);
        cout<<s*s<<endl;
    }
    return 0;
}