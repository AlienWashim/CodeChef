#include <stdio.h>

#define MOD 1000000007

long long mod_inv(long long x, long long mod) {
    long long result = 1, power = mod - 2;
    while (power > 0) {
        if (power % 2 == 1) {
            result = (result * x) % mod;
        }
        x = (x * x) % mod;
        power /= 2;
    }
    return result;
}

long long calculate_probability(int n, int d, int *piles) {
    int nim_sum = 0;
    for (int i = 0; i < n; i++) {
        nim_sum ^= piles[i];
    }

    long long P = (nim_sum != 0) ? (d + 1) : (d - 1);
    long long Q = 2 * d;
    long long Q_inv = mod_inv(Q, MOD);

    return (P * Q_inv) % MOD;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int n, d;
        scanf("%d %d", &n, &d);
        
        int piles[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &piles[i]);
        }

        printf("%lld\n", calculate_probability(n, d, piles));
    }

    return 0;
}