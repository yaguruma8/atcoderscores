// ABC057 B - Checkpoints
#include <stdio.h>
#include <stdlib.h>

int distance(int a, int b, int c, int d)
{
    return abs(a - b) + abs(c - d);
}

int main(void)
{
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N], b[N];
    int c[M], d[M];
    int i, j;
    for (i = 0; i < N; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < M; i++) {
        scanf("%d %d", &c[i], &d[i]);
    }

    for (i = 0; i < N; i++) {
        int near = ~(1 << 31);
        int point = -1;
        for (j = 0; j < M; j++) {
            int dist = distance(a[i], c[j], b[i], d[j]);
            if (dist < near) {
                near = dist;
                point = j + 1;
            }
        }
        printf("%d\n", point);
    }

    return 0;
}