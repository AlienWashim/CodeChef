#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        // Your code goes here
        if(a == b || a == c || b == c){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
}
