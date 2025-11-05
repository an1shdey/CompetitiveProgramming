#include <bits/stdc++.h>
using namespace std;
 
int main(){
   	int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }

    sort(arr[0],arr[3]);
    
    if((arr[0]+arr[3])==(arr[1]+arr[2])) cout<<"YES";
    else if((arr[0]+arr[1]+arr[2])==(arr[3])) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}