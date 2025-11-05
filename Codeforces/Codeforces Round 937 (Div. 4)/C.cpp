#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string hour;
        string newhour;
        string minutes;
        string o = "0";
        for(int i = 0 ; i<2 ; i++){
            hour.push_back(s[i]);
        }
        for(int i = 2 ; i<5 ; i++){
            minutes.push_back(s[i]);
        }

        int num = stoi(hour);
        string half;
        if(num >= 12){
            half = " PM";
            if(num > 12){
                num -= 12;
                if(num>=10){
                    newhour = to_string(num);
                }
                else{
                    newhour = to_string(num);
                    newhour = o + newhour;
                }
            }
            else newhour = "12";
            
            string ans  = newhour + minutes + half;
            cout<<ans<<endl;
        }
        else if(num == 0){
            half = " AM";
            num =12;
            newhour = to_string(num);
            string ans = newhour + minutes + half;
            cout<<ans<<endl; 
        }
        else{
            half = " AM";
            string ans  = hour + minutes + half;
            cout<<ans<<endl;
        }
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;


        if(s[0]==0 && s[1]>1){
            a=0;
        }
        else if(s[0]==1 && s[1]<=2){
            a=0;
        }
        else if(s[0]==1 && s[1]>2){
            s[0]=0;
            s[1]=s[1]-2;
            a=1;
        }
        else if(s[0]==2 && s[1]<2){
            s[0]=0;
            s[1]=(10+s[1])-2;
            a=1;
        }
        else if(s[0]==0 && s[1]==0){
            s[0]=1;
            s[1]=2;
            a=1;
        }
        else a=1;
        

        if(a==0) s=s+" AM";
        else s=s+" PM";
        cout<<s<<endl;
            
    }
    return 0;
}*/