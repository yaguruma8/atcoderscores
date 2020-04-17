// ABC046 B - AtCoDeerくんとボール色塗り
#include <stdio.h>

int main(void) {
    int N, K;
    long long result;
    // input
    scanf("%d %d", &N, &K);

    result = K;

    if (N == 1) {
        printf("%lld\n", result);
        return 0;
    }
    int i;
    for (i = 0; i < (N - 1); i++) {
        result *= (K - 1);
    }
    printf("%lld\n", result);
    return 0;
}