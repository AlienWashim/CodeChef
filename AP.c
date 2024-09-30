#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while (T--) {
        int X, Y, Z;
        scanf("%d %d %d", &X, &Y, &Z);
        
        if (2 * Y == X + Z) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    }
    
    return 0;
}
