#include <bits/stdc++.h>
using namespace std;
 
int main(){
   	char s[10000];
    for (int i = 0; i < 10000; i++)
    {
        cin>>s[i];
    }
    if(int(s[0])>90){
        s[0]=s[0]-32;
    }
    cout<<s;
    return 0;
}