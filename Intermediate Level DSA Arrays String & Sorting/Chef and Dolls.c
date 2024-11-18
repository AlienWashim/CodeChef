#include <stdio.h>

#define MAX_TYPE 100000

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        int count[MAX_TYPE] = {0};

        for(int i = 0; i < N; i++) {
            int type;
            scanf("%d", &type);
            count[type]++;
        }

        for(int i = 0; i < MAX_TYPE; i++) {
            if(count[i] % 2 != 0) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
