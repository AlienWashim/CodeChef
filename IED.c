#include <stdio.h>

int main() {
	int chef, chefina, price;
	scanf("%d %d %d", &chef, &chefina, &price);
	
	if(chef > chefina){
	   printf("%d\n", (chef * price)); 
	}else{
	    printf("%d\n", (chefina * price));
	}
}

