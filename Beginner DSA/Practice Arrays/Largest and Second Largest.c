#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int largest = a[0], secondLargest = -1;

        for (int i = 1; i < n; i++) {
            if(a[i] > largest){
                secondLargest = largest;
                largest = a[i];
            }
            else if(a[i] > secondLargest && a[i] < largest){
                secondLargest = a[i];
            }
        }

        printf("%d\n", largest + secondLargest);
    }

    return 0;
}
