// ABC046 A - AtCoDeerくんとペンキ
#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int result = 1;
    if (a != b) {
        result += 1;
    }
    if (a != c && b != c) {
        result += 1;
    }

    printf("%d\n", result);

    return 0;
}