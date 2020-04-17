// ABC048 B - Between a and b ...
#include <stdio.h>

int main(void) {
    unsigned long long a, b, x;
    unsigned long long result;
    // input
    scanf("%llu %llu %llu", &a, &b, &x);

    result = (b / x) - (a / x);
    if (a % x == 0) {
        result++;
    }

    printf("%llu\n", result);

    return 0;
}