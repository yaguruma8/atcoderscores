// ABC059 B - Comparison
#include <stdio.h>
#include <string.h>

int main(void)
{
    char A[102];
    char B[102];
    scanf("%s", A);
    scanf("%s", B);
    int alen, blen;
    alen = strlen(A);
    blen = strlen(B);

    // 桁数が異なる場合
    if (alen > blen) {
        printf("GREATER\n");
        return 0;
    } else if (alen < blen) {
        printf("LESS\n");
        return 0;
    }
    // 桁数が同じ場合は上位の桁から比較
    int i = 0;
    while (i <= alen) {
        if (A[i] > B[i]) {
            printf("GREATER\n");
            return 0;
        } else if (A[i] < B[i]) {
            printf("LESS\n");
            return 0;
        }
        i++;
    }
    printf("EQUAL\n");
    return 0;
}