#include <stdio.h>

int main() {
    int t;
	
	scanf("%d", &t);
    
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        
        int sweets[n], i, count = 0;
        for(i = 0; i < n; i++){
            scanf("%d", &sweets[i]);
        }
        
        int total_cal = 0;
        
        for(i = 0; i < n; i++){
            
            total_cal = total_cal + sweets[i];
            
            if(total_cal <= k){
                count = count + 1;
            }else{
                break;
            }
        }
        printf("%d\n", count);
        
    }
}

