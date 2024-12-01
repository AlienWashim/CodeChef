#include <stdio.h>

int main() {
	// your code goes here
    int test;
    scanf("%d", &test);
    
    while(test--){
        int item_cost;
        scanf("%d", &item_cost);
        
        int cost = item_cost / 10 * 10;
        int extra = item_cost % 10;
        
        if(extra >= 5){
            printf("%d\n", 100 - (cost +10));
        }else{
            printf("%d\n", 100 - cost);
        }
    }
}

