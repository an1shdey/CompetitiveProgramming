#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int num;
   cin>>num;
   long long int ans=0;
   long long int multi=1;   

   while(num>0){
    int lastdigit=num%10;
    if(num!=9){
        if(9-lastdigit<lastdigit){
            ans+=((9-lastdigit)*multi);
            multi*=10;
            num/=10;

        }
        else{
            ans+=((lastdigit)*multi);
            multi*=10;
            num/=10;
        }
    }
    else{
         ans+=((lastdigit)*multi);
            multi*=10;
            num/=10;
    }
   }
   cout<<ans;
return 0;
}