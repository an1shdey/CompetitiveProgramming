#include<stdio.h>
     
int main()
{
    int i;
    scanf("%d", &i);
    while (i--){
        int a;
            scanf("%d",&a);
        if (a>=1900){
            printf("Division 1");
        
        }
        else if (a>=1600 && a<1900){
            printf("Division 2");
     
        }
        else if (a>=1400 && a<1600){
            printf("Division 3");
        }
        else {
            printf("Division 4");
        }
        printf("\n");
    }
    return 0;
    
}