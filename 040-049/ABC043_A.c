// ABC043 A - キャンディーとN人の子供イージー

#include <stdio.h>

int main(void) {

    int N;
    int i = 0;
    int result = 0;

    // input
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        result += i;
    }

    // output
    printf("%d\n", result);

    return 0;
}