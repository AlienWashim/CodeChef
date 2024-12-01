#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);
        // Your code goes here
        
        if(y > x){
            printf("%d\n", x + ((y-x)*2)); 
        }else{
            printf("%d\n",y); 
        }
    }

}
