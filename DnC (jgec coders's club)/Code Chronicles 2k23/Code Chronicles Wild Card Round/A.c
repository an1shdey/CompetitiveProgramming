#include <stdio.h>
#include <string.h>
 
int main() 
{
    int i;
    scanf("%d", &i);
    while (i--) 
    {
        char x[4];
        scanf("%s", x);
 
        if (x[0] == 'a' && x[1] == 'b') {
            printf("YES\n");
        } 
        else if (x[1] == 'b' && x[2] == 'c') {
            printf("YES\n");
        }
        else if (x[0] == 'a' && x[2] == 'c') {
            printf("YES\n");
        }
        else if (x[0] == 'a' && x[2] == 'b') {
            printf("YES\n");
        }
        else if (x[0] == 'a' && x[1] == 'c') {
            printf("YES\n");
        }
        else if (x[0] == 'a' && x[2] == 'b') {
            printf("YES\n");
        }
        else if (x[1] == 'c' && x[2] == 'b') {
            printf("YES\n");
        }
        else if (x[0] == 'b' && x[2] == 'c') {
            printf("YES\n");
        }
        else if (x[1] == 'a' && x[2] == 'c') {
            printf("YES\n");
        }
        else if (x[0] == 'b' && x[1] == 'a') {
            printf("YES\n");
        }
        else if (x[0] == 'c' && x[2] == 'a') {
            printf("YES\n");
        }
        else if (x[0] == 'c' && x[1] == 'b') {
            printf("YES\n");
        }
        else if (x[1] == 'b' && x[2] == 'a') {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
 
    return 0;
}