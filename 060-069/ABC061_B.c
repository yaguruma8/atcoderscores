// ABC061 B - Counting Roads
#include <stdio.h>

int main(void) {
    int N, M;
    int roads[51] = { 0 };
    scanf("%d %d", &N, &M);
    for (int i = 0; i < M; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        roads[a] += 1;
        roads[b] += 1;
    }
    for (int i = 1; i <= N; i++) {
        printf("%d\n", roads[i]);
    }

    return 0;
}