// ABC060 B - Choose Integers
#include <stdio.h>

int main(void)
{
    int A, B, C;
    int modFlag[100] = { 0 };
    scanf("%d %d %d", &A, &B, &C);
    int a = A;
    while (1) {
        int mod = a % B;
        // printf("%d, ", a);
        if (mod == C) {
            printf("YES\n");
            return 0;
        } else {
            if (modFlag[mod] == 1) {
                printf("NO\n");
                return 0;
            } else {
                modFlag[mod] = 1;
            }
        }
        a += A;
    }
}