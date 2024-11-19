
#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int arr[n], count = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; i++) {
            int isDistinct = 1;
            for (int j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    isDistinct = 0;
                    break;
                }
            }
            if (isDistinct) count++;
        }
        printf("%d\n", count);
    }
    return 0;
}