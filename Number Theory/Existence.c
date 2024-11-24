#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long x, y;
        scanf("%lld %lld", &x, &y);
        
        long long x4 = x * x * x * x;
        long long y2 = y * y;
        long long left_side = x4 + 4 * y2;
        long long right_side = 4 * x * x * y;
        
        if (left_side == right_side) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
