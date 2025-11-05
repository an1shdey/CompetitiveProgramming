#include <stdio.h>
 
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
 
    int total=(w*(w+1)/2)*k;
 
    int borrow;
    if (total>n){
        borrow=total-n;
    }
    else{
        borrow=0;
    }
    
    printf("%d", borrow);
 
    return 0;
}