#include <stdio.h>

int main() {
    int T, N, i, even_divisors, odd_divisors;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        even_divisors = odd_divisors = 0;

        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0)
                    even_divisors++;
                else
                    odd_divisors++;
            }
        }

        if (even_divisors > odd_divisors)
            printf("1\n");
        else if (even_divisors == odd_divisors)
            printf("0\n");
        else
            printf("-1\n");
    }

    return 0;
}
