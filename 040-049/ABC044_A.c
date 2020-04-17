//ABC043 A - 高橋君とホテルイージー

#include <stdio.h>

int main(void) {
    int N, K, X, Y;
    int result;

    scanf("%d", &N);
    scanf("%d", &K);
    scanf("%d", &X);
    scanf("%d", &Y);

    if (N > K) {
        result = K * X + (N - K) * Y;
    } else {
        result = N * X;
    }

    // output
    printf("%d\n", result);

    return 0;
}