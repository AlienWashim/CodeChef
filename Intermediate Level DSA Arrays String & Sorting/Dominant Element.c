#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);
    
    while (test--) {
        int n;
        scanf("%d", &n);
        
        int freq[n + 1];
        for (int i = 0; i <= n; i++) {
            freq[i] = 0;
        }
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            freq[arr[i]]++;
        }
        
        int maxFreq = 0, countMaxFreq = 0;
        for (int i = 1; i <= n; i++) {
            if (freq[i] > maxFreq) {
                maxFreq = freq[i];
                countMaxFreq = 1;
            } else if (freq[i] == maxFreq) {
                countMaxFreq++;
            }
        }
        
        if (countMaxFreq == 1) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
