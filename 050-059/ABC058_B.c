// ABC058 B - ∵∴∵
#include <stdio.h>

int main(void) {
    char O[51];
    char E[51];
    scanf("%s", O);
    scanf("%s", E);

    int i = 0;
    while (E[i] != '\0') {
        printf("%c", O[i]);
        printf("%c", E[i]);
        i++;
    }
    if (O[i] != '\0') {
        printf("%c", O[i]);
    }
    printf("\n");

    return 0;
}