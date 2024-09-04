#include <stdio.h>

void perform_operations(int A[], int N, int K) {
    int start = 0, end = N - 1;
    
    while (K--) {
        int X = A[start];
        int Y = A[end];
        
        int new_element = X + Y;
        
        start++;
        A[end] = new_element;
    }
    
    for (int i = start; i <= end; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);
        
        int A[100005];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        perform_operations(A, N, K);
    }
    
    return 0;
}
