// ABC063 B - Varied
#include <stdio.h>
#include <string.h>

int main(void) {
    char S[27];
    scanf("%s", S);
    int slen = strlen(S);

    int flag[26] = {0};
    for (int i = 0; i < slen; i++) {
        if (flag[S[i] - 97] == 1) {
            printf("no\n");
            return 0;
        } else {
            flag[S[i] - 97] = 1;
        }
    }
    printf("yes\n");

    return 0;
}