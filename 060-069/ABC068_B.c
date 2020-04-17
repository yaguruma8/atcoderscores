// ABC068 B - Break Number
#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    if (N == 1) {
        printf("1\n");
        return 0;
    }
    int result = 2;
    while (N >= result * 2) {
        if (N <= result) {
            break;
        }
        result *= 2;
    }
    printf("%d\n", result);
    return 0;
}