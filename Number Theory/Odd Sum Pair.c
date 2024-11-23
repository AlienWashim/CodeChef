#include <stdio.h>

int main() {
	// your code goes here
    int test;
    scanf("%d", &test);
    
    while(test--){
        int a, b, c;
        
        scanf("%d %d %d", &a, &b, &c);
        
        if((a+b)%2 == 1 || (a+c)%2 == 1 || (b+c)%2 == 1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}

