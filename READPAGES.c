#include <stdio.h>

int main() {
	int test, n, x, y;
	
	scanf("%d", &test);
	while(test--){
	    scanf("%d %d %d",&n, &x, &y);
	    if( (x*y) >= n){
	        printf("YES\n");
	    }else{
	        printf("NO\n");
	    }
	}

}

