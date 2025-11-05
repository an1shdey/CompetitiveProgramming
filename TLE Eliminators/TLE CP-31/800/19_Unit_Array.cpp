#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define sp ' '
#define vi vector<int>

int tt;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin>>tt;
    while(tt--){
		int n;
		cin>>n;

		vi a(n);
		int f1=0,f2=0; //f1->freq of negative numbers
					   //f2->freq of positive numbers
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==-1) f1+=1;
			else f2+=1;
		}

		if(f1<=f2) //condition 1 is met
		{
			if(f1%2 != 0) //if f1 is odd, then convert one -1 to satisfy 2nd condition(product of all element=1) 
				cout<<1<<endl;
			else 
				cout<<0<<endl;
		}
		else //f1>f2
		{
			int ops=f1-(n/2); //now -1's are n/2 & f1<=f2, 
							  //ops is no. of operations needed to make f2>=f1
							  //(f1 which is larger than half, thats why it is >f2)-(half of the total no.)=gives the no. of -1's to be converted to get f1>=f2
			if(n/2 % 2 != 0) //if n/2 is odd
				cout<<ops+1<<endl; //+1 one more -1 is converted so that 2nd condition is satisfied
			else
				cout<<ops<<endl;
		}
    }
    return 0;
}
