#include <stdio.h> 
 
int main() { 
    int x, y; 
     
    scanf("%d %d", &x, &y); 
     
    if (y <= 2 * x) { 
        printf("METAL\n"); 
    } else { 
        printf("PLASTIC\n"); 
    } 
 
    return 0; 
}