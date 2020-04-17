// ABC066 B - ss
#include <stdio.h>
#include <string.h>

int main(void) {
    char S[201];
    scanf("%s", S);
    int slen = strlen(S);
    int flag = 1;
    for (int i = slen - 2; i > 0; i -= 2) {
        int center = i / 2;
        flag = 1;
        for (int j = 0; j < center; j++) {
            if (S[j] != S[center + j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d\n", center * 2);
            return 0;
        }
    }
    return 0;
}