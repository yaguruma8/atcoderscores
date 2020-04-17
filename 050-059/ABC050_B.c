// ABC050 B - Contest with Drinks Easy
#include <stdio.h>

int main(void) {
    int N, M;
    int T[100];
    int PX[100][2];

    // input
    scanf("%d", &N);
    int i = 0;
    for (i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    scanf("%d", &M);
    for (i = 0; i < M; i++) {
        scanf("%d %d", &PX[i][0], &PX[i][1]);
    }
    unsigned long long defaultTime = 0;
    for (i = 0; i < N; i++) {
        defaultTime += (unsigned long long)T[i];
    }

    for (i = 0; i < M; i++) {
        unsigned long long time = 0;
        int diff = T[PX[i][0] - 1] - PX[i][1];
        time = defaultTime - (unsigned long long)diff;
        printf("%lld\n", time);
    }
}