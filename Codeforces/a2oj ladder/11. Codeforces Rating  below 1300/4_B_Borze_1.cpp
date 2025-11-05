#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string r;
    /*
    char r[50];
    int cnt=0;
    */

    for(int i=0; i<s.size(); i++){
        if(s[i]== '.'){
            r+='0';
            /*
            r[cnt]='0';
            cnt++;
            */
        }
        else if(s[i]== '-' && s[i+1]=='.'){
            r+='1';
            /*
            r[cnt]='1';
            cnt++;
            */
            i++;
        }
        else if(s[i]== '-' && s[i+1]=='-'){
            r+='2';
            /*
            r[cnt]='2';
            cnt++;
            */
            i++;
        }
    }
    cout<<r;
    
    return 0;
}