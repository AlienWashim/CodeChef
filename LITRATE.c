#include <stdio.h>

int main() {
    int t, p, l;
    float rate;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d %d", &p, &l);
        
        rate = ((float)l / p) * 100;
        
        if (rate >= 75) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
