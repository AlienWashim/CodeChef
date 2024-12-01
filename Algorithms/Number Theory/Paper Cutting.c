#include <stdio.h>

int main() {
	// your code goes here
    int test;
    scanf("%d", &test);
    
    while(test--){
        int n,k;
        
        scanf("%d %d", &n, &k);
        
        printf("%d\n", (n / k) * (n / k));
    }
}

