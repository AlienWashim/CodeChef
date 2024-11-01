#include <stdio.h>

int main() {
    int A, B, amount_to_pay;
    scanf("%d %d", &A, &B);

    if (B >= A)
        amount_to_pay = 0;
    else
        amount_to_pay = A - B;

    printf("%d\n", amount_to_pay);
    return 0;
}
