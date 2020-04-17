// ABC055 B - Training Camp
#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    unsigned long long M;
    unsigned long long result = 1;

    scanf("%d", &N);
    M = (unsigned long long)pow(10.0, 9.0) + 7;
    unsigned long long i;
    for (i = 1; i<= N; i++) {
        result = ((result % M) * (i % M)) % M;
    }
    printf("%lld\n", result);

    return 0;
}