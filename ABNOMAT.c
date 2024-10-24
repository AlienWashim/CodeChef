#include <stdio.h>
#include <string.h>

int main() {
    int t,N,M;
    char Sa[51], Sb[51];
    
    scanf("%d",&t);
    
    while(t--){
        scanf("%d %d", &N, &M);
        scanf("%s %s", Sa, Sb);
        
        int used[26] = {0};
        for (int i = 0; i < N; i++) {
            used[Sa[i] - 'a'] = 1;
        }
        for (int i=0; i < M; i++) {
            used[Sb[i] - 'a'] = 1;
        }
        
        int check = 0;
        for (int i = 0; i < 26; i++){
            if (!used[i]) {
                check = 1;
                break;
            }
        }
        
        if (check) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}



