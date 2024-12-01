#include <stdio.h>

int main() {
    int T, N, M;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        float online_price = N - (0.1 * N);
        if (online_price < M) {
            printf("ONLINE\n");
        } else if (online_price > M) {
            printf("DINING\n");
        } else {
            printf("EITHER\n");
        }
    }

    return 0;
}
