// ABC064 B - Traveling AtCoDeer Problem
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    int min = 1001;
    int max = -1;
    for (int i = 0; i < N; i++) {
        int a;
        scanf("%d", &a);
        if (a < min) {
            min = a;
        }
        if (a > max) {
            max = a;
        }
        // printf("min:%d, max:%d\n", min, max);
    }
    printf("%d\n", max-min);

    return 0;
}