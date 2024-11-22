#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    while (test--) {
        int n;
        scanf("%d", &n);
        int arr[n];
        int frequency[n + 1];

        for (int i = 0; i <= n; i++) {
            frequency[i] = 0;
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            frequency[arr[i]]++;
        }
        
        int maxFreq = 0;
        for (int i = 1; i <= n; i++) {
            if (frequency[i] > maxFreq) {
                maxFreq = frequency[i];
            }
        }
        
        printf("%d\n", n - maxFreq);
    }

    return 0;
}
