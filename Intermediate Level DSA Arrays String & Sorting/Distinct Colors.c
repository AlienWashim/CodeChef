#include <stdio.h>

int main() {
	// your code goes here
    int test;
    scanf("%d", &test);
    
    while(test--){
        int n;
        scanf("%d", &n);
        
        int arr[n];
        
        for(int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        
        int max = -1;
        
        for(int i = 0; i< n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        
        printf("%d\n", max);
    }
}

