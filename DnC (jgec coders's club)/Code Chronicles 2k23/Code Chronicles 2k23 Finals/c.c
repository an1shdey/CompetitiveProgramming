#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    scanf("%d",&i);

    while(i--){
        int n,x,p,o,a,r,u;
        scanf("%d",&n);
        p=n;
        r=n;
        u=n;

        char s[n];
        scanf("%s", s);

        while(n--){
            a=s[n]+a;
        }

        
        if (a%2==0 && s[p]%2 != 0){
            //sum_of_snitch=a;
            printf("%c",s[p]);
        }
        else{
            printf("-1\n");
            while(r--){
                o=a-s[p];
                if(o%2==0){
                    s[r]='.';
                }
                else{
                    o=a-s[r];
                    if (o%2==0 && s[p]%2 != 0){
            
                        printf("%c",s[p]);
                    }
                    else{
                        continue;
                    }
                }
            }
            
            while(u--){
            if(s[u]=='.'){
                continue;
            }
            else{
                printf("%c",s[u]);
            }

            }
        
        

        

        

    }


    return 0;
}

