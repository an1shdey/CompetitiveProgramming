#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<string> board(n);
      for(int i=0;i<n;i++){
        cin>>board[i];
      }
      int a;
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]=='1'){
                // Check if it's a square
                for (int k = i + 1; k < n; ++k) {
                    if (board[k][j] == '0') {
                        a=1;
                    }
                    else a=0;
                }
                for (int k = i + 1; k < n; ++k) {
                    for (int l = j + 1; l < n; ++l) {
                        if (board[k][l] == '1') {
                            a=1;
                        }
                        else a=0;

                    }
                }

            }
        }
      }
      if(a==0) cout<<"SQUARE"<<endl;
      else cout<<"TRIANGLE"<<endl;
    }
}