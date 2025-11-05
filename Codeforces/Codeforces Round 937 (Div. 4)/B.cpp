#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d=0;
        cin>>n;
        char a[2*n][2*n];
        for(int i=0;i<2*n;i=i+2){
            if(d%2==0){
                int c=0;
                for(int j=0;j<2*n;j=j+2){
                    if(c%2==0){
                        a[i][j]='#';
                        a[i][j+1]='#';
                        a[i+1][j]='#';
                        a[i+1][j+1]='#';
                
                    }
                    else{
                        a[i][j]='.';
                        a[i][j+1]='.';
                        a[i+1][j]='.';
                        a[i+1][j+1]='.';
                
                    }
                    c++;
                }
            }
            else{
                int c=0;
                for(int j=0;j<2*n;j=j+2){
                    if(c%2==0){
                        a[i][j]='.';
                        a[i][j+1]='.';
                        a[i+1][j]='.';
                        a[i+1][j+1]='.';
                
                    }
                    else{
                        a[i][j]='#';
                        a[i][j+1]='#';
                        a[i+1][j]='#';
                        a[i+1][j+1]='#';
                
                    }
                    c++;
                }
            }
            d++;
            
        }
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}