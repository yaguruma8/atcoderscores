// ABC045 A - 台形

#include <stdio.h>

int main(void)
{
    int a, b, h;
    int result = 0;

    // input
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &h);

    result = (a + b) * h / 2;

    // output
    printf("%d\n", result);

    return 0;
}
