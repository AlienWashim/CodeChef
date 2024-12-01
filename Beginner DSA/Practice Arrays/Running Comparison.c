#include <stdio.h>
#include <stdbool.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }

        int happyDays = 0;

        for (int i = 0; i < n; i++) {
            bool isAliceHappy = !(b[i] > (2 * a[i]));
            bool isBobHappy = !(a[i] > (2 * b[i]));

            if (isAliceHappy && isBobHappy) {
                happyDays++;
            }
        }

        printf("%d\n", happyDays);
    }

    return 0;
}
