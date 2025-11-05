#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4][4];
    for(int i=1;i<4;i++){
        for(int j=1;j<4;j++){
            cin>>a[i][j];

            if(a[i][j]%2 == 0){
                a[i][j] = 1;
            }
            else a[i][j] = 0;

            cout<<a[i][j];
        }
        cout<<endl;
    }
   
    return 0;
}