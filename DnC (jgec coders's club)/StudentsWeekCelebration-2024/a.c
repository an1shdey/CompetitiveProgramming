    #include<stdio.h>
         
    int main()
    {
        int i;
        scanf("%d",&i);
        while (i--){
            int a,b,c,d,sum=0;
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if(a<b){
                sum=sum+1;
            }
            
            if(a<c){
                sum=sum+1;
            }
        
            if(a<d){
                sum=sum+1;
            }
        
            printf("%d\n",sum);
        }
        return 0;
        
    }