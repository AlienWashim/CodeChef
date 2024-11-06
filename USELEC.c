#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        int A[N], B[N];
        for (int i = 0; i < N; i++) scanf("%d", &A[i]);
        for (int i = 0; i < N; i++) scanf("%d", &B[i]);

        int current_wins = 0, needed_votes_count = 0;
        int needed_votes[N];
        
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                current_wins++;
            } else {
                needed_votes[needed_votes_count++] = B[i] - A[i] + 1;
            }
        }

        if (current_wins > N / 2) {
            printf("YES\n");
            continue;
        }

        qsort(needed_votes, needed_votes_count, sizeof(int), compare);

        int required_wins = (N / 2 + 1) - current_wins;
        int possible = 0;

        for (int i = 0; i < needed_votes_count && required_wins > 0; i++) {
            if (X >= needed_votes[i]) {
                X -= needed_votes[i];
                required_wins--;
            } else {
                break;
            }
        }

        printf(required_wins <= 0 ? "YES\n" : "NO\n");
    }

    return 0;
}
