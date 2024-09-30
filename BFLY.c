#include <stdio.h>

int max(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int R, G, B;
        scanf("%d %d %d", &R, &G, &B);
        
        int largest = max(R, G, B);
        int sum_of_others = R + G + B - largest;
        
        if (largest > sum_of_others) {
            printf("NO\n");
        } else {
            printf("YES\n");
        }
    }
    
    return 0;
}
