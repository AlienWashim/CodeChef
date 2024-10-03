#include <stdio.h>

int main() {
    int N;
    const int ticket_price = 5000;

    scanf("%d", &N);
    int total_cost = (N + 1) * ticket_price;
    printf("%d\n", total_cost);

    return 0;
}
