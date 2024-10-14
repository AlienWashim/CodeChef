#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int A[N];
        int total_sum = 0;

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            total_sum += A[i];
        }

        if (total_sum % 2 == 0) {
            printf("%d\n", N);
        } else {
            int first_odd = -1, last_odd = -1;
            for (int i = 0; i < N; i++) {
                if (A[i] % 2 != 0) {
                    if (first_odd == -1) {
                        first_odd = i;
                    }
                    last_odd = i;
                }
            }

            if (first_odd == -1) {
                printf("%d\n", 0);
            } else {
                int result = (N - 1) - first_odd > last_odd ? N - 1 - first_odd : last_odd;
                printf("%d\n", result);
            }
        }
    }

    return 0;
}
