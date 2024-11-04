#include <stdio.h>

int main() {
	int test, a, b, c, x;
	
	scanf("%d", &test);
	
	while(test--){
	    scanf("%d %d %d %d", &a, &b, &c, &x);
	    if( (a+b) >= x || (a+c) >= x || (b+c) >= x){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}
}

