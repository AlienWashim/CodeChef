#include <stdio.h>

// calculating GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        
        // Maximum number of contestants is the GCD of n and m
        printf("%lld\n", gcd(n, m));
    }
    
    return 0;
}
