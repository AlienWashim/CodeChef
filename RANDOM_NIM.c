#include <stdio.h>
#define MOD 1000000007

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, D;
        scanf("%d %d", &N, &D);

        int nim_sum = 0;
        for (int i = 0; i < N; i++) {
            int A;
            scanf("%d", &A);
            nim_sum ^= A;
        }

        long long P, Q = D;
        if (nim_sum == 0) {
            P = D / 2;
        } else {
            P = (D + 1) / 2;
        }

        long long Q_inv = mod_pow(Q, MOD - 2, MOD);

        long long result = (P * Q_inv) % MOD;
        printf("%lld\n", result);
    }

    return 0;
}
