#include <stdio.h>
#include <string.h>
 
    
    int main()
    {
        int i;
        scanf("%d",&i);
     
        while (i--){
            int g,r,s,h,x,y,b,c;
            scanf ("%d %d %d %d",&g,&r,&s,&h);
            if(g>r){
                x=g;
                b=r;
            }
            else{
                x=r;
                b=g;
            }
     
            if(s>h){
                y=s;
                c=h;
            }
            else{
                y=h;
                c=s;
            }
            
            if(c>x || b>y){
                printf ("NO");
            }
            else{
                printf("YES");
            }
            
            printf("\n");
        }
        
    }