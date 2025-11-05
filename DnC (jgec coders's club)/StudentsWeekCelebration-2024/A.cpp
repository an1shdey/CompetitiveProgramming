#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int ankit=a[0];
    int front=0;
    for(int i=1;i<4;i++){
        if(a[i]>ankit){
            front=front+1;
        }
    }
    cout<<front<<endl;
    }
return 0;
}