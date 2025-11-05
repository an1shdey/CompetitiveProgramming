#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int board[10][10]= {
                           {1,1,1,1,1,1,1,1,1,1},
                           {1,2,2,2,2,2,2,2,2,1},
                           {1,2,3,3,3,3,3,3,2,1},
                           {1,2,3,4,4,4,4,3,2,1},
                           {1,2,3,4,5,5,4,3,2,1},
                           {1,2,3,4,5,5,4,3,2,1},
                           {1,2,3,4,4,4,4,3,2,1},
                           {1,2,3,3,3,3,3,3,2,1},
                           {1,2,2,2,2,2,2,2,2,1},
                           {1,1,1,1,1,1,1,1,1,1}
                           };

        char c[10][10];
        int score=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>c[i][j];

                if(c[i][j] == 'X') score+=board[i][j];
            }            
        }
        cout<<score<<endl;
        
    }
    return 0;
}

/*
OR
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      vector<string> board(10);
      for(int i=0;i<10;i++){
        cin>>board[i];
      }
      int score=0;
      for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(board[i][j]=='X'){
                int point=min({i,j,10-j-1,10-i-1})+1;
                score=score+point;
            }
        }
      }
      cout<<score<<endl;
    }
return 0;
}
*/