#include <stdio.h>

int maxRectangleArea(int N) {
    int maxArea = 0;
    for (int length = 1; length <= N / 2; length++) {
        int width = (N - 2 * length) / 2;
        if (width > 0) {
            int area = length * width;
            if (area > maxArea) {
                maxArea = area;
            }
        }
    }
    return maxArea;
}

int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        printf("%d\n", maxRectangleArea(N));
    }
    return 0;
}
