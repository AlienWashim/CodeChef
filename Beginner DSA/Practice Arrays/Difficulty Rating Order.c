#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        
        // Your code goes here
        int checker = 1;
        for (int i = 0; i < n-1; i++) {
            if(d[i+1] < d[i] ){
                checker = 0;
                break;
            }
        }
        
        if(checker){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}
