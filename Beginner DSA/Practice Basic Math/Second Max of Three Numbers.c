#include <stdio.h>

int main() {
	// your code goes here
    int n;
    scanf("%d", &n);
    
    int a,b,c;
        
    while(n--){
        scanf("%d %d %d", &a, &b, &c);
    
    if((a>b && a < c) || (a < b && a > c)){
        printf("%d\n", a);
    }else if((b > a && b < c) || (b < a && b > c)){
        printf("%d\n", b);
    }else if((c > a && c < b) || (c < a && c > b)){
        printf("%d\n", c);
    }
    }
}

