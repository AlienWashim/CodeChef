#include <stdio.h>

int main() {
    int test, store1_discount, store2_discount;
    scanf("%d", &test);

    while(test--) {
        scanf("%d %d", &store1_discount, &store2_discount);
        
        int store1FinalPrice = 100 - ((store1_discount*100)/100);
        int store2FinalPrice = 200 - ((store2_discount*200)/100);
        
        if(store1FinalPrice < store2FinalPrice){
            printf("FIRST\n");
        }else if( store1FinalPrice > store2FinalPrice){
            printf("SECOND\n");
        }else{
            printf("BOTH\n");
        }
    }

    return 0;
}
