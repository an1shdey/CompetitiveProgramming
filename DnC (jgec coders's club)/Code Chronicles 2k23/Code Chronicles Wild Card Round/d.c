#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        int lastSeen[32]={0};
        int groups=0;
        int prevPos=-1;
        
        int i;
        for (i=0;i<n;i++) {
            int points;
            scanf("%d",&points);

            if (lastSeen[points] != 0 && i-prevPos==1) {
                groups++;
            }

            lastSeen[points]=1;
            prevPos=i;
        }

        printf("%d\n", groups+1);
    }

    return 0;
}
