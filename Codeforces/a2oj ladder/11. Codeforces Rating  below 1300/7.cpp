#include <bits/stdc++.h>
using namespace std;
 
int main(){
   	char s[100];
    int u=0,l=0;
    for(int i=0;i<100;i++){
        cin>>s[i];
    }
    for(int i=0;s[i] != '\0';i++){
        if(int(s[i])>=65 && int(s[i])<=90){
            u++;
        }
        else l++;
    }
    if(l>u){
        for(int i=0;s[i] != '\0';i++){
            if(int(s[i])>=65 && int(s[i])<=90){
                s[i]=s[i]+32;
            }
        }
    }
    else if(u==l){
        for(int i=0;s[i] != '\0';i++){
            if(int(s[i])>=65 && int(s[i])<=90){
                s[i]=s[i]+32;
            }
        }
    }
    else {
        for(int i=0;s[i] != '\0';i++){
            if(int(s[i])>=97 && int(s[i])<=122){
                s[i]=s[i]-32;
            }
        }
    }
    
    cout<<s;

    return 0;
}