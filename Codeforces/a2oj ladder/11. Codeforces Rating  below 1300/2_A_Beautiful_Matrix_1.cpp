#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6][6],row,column;
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>a[i][j];
            if(a[i][j] == 1){
                //abs() acts like mod in maths, converts any negative into positive
                row=abs(3-i);
                column=abs(3-j);
                cout<<row+column;
            }
        }
    }
    return 0;
}