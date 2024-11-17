#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Your code goes here
        
        int without_coupon = 0, with_coupon = 0;
        
        for (int i = 0; i < n; i++) {
            without_coupon += a[i];
        }
        
        
        for (int i = 0; i < n; i++) {
            if(a[i] <= y){
                with_coupon += 0;
            }else{
                with_coupon += a[i] - y;
            }
        }
        
        int take_coupon = with_coupon + x;
        
        if(take_coupon < without_coupon){
            printf("COUPON\n");
        }else{
            printf("NO COUPON\n");
        }
    }

    return 0;
}
