#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        int *A = (int *)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int g = A[0];
        for (int i = 1; i < N; i++) {
            g = gcd(g, A[i]);
        }

        int moves = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] != g) {
                moves++;
            }
        }

        printf("%d\n", moves);
        free(A);
    }

    return 0;
}
