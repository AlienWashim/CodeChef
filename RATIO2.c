#include <stdio.h>
#include <stdlib.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        int operations = 0;
        
        while (X < 2 * Y && Y < 2 * X) {
            if (X > Y) {
                Y--;
            } else {
                X--;
            }
            operations++;
        }
        
        printf("%d\n", operations);
    }
    
    return 0;
}
