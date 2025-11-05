#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt,t;
    cin>>tt>>t;

    string s;
    cin>>s;

    while(t--){
        for(int i=0;i<tt;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i++; 
            }
        }
    }
    cout<<s;
    
    return 0;
}

/*
int main(){
    int tt;
    cin>>tt;
    int t;
    cin>>t;

    char arr[tt];
    for(int i=0;i<tt;i++){
        cin>>arr[i];
    }

    while(t--){
        for(int i=0;i<tt;i++){   
            int mini=i;
            if(arr[i]=='B' && arr[i+1]=='G'){
                mini=i+1;
                int temp=arr[mini];
                arr[mini]=arr[i];
                arr[i]=temp;
              //i++;                
            }
        }
    }
    
    for(int i=0;i<tt;i++){
        cout<<arr[i];
    }
    
    return 0;
}
*/
