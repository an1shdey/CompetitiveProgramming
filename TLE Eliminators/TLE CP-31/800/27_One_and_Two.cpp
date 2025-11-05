#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int n;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
        cin>>n;
        vi a(n);

        vi temp;
        int one=0,two=0; //count no. of 1's and 2's
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) one++;
            else{
                two++;
                temp.push_back(i+1); //store the position of 2's in a temporary array
            }
        }
        if(two%2!=0) cout<<-1; //if number of 2's are odd, then no k such that (left product == right product)
        else{ //if number of 2's are even, then k is possible
            if(two==0) cout<<1; //if there are no 2's only 1's, no need to check anything the first element will be smallest k
            else{                              //if there are both 2's and 1's ignore the 1's
                cout<<temp[(temp.size()/2)-1]; //check the temporary array where position of 2's are store, the 2 in the middle{n/2 - 1 (-1 since n is size and indexing is from 0 to n-1)} position will be the k
            }
        }
        cout<<endl;
        
    }
    return 0;
}