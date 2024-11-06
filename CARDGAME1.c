#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);

        int even_count = N / 2;
        int odd_count = N - even_count;
        
        if (X % 2 == 0) { 
            printf("%d\n", even_count - (X <= N && X % 2 == 0));
        } else {
            printf("%d\n", odd_count - (X <= N && X % 2 != 0));
        }
    }
    
    return 0;
}
