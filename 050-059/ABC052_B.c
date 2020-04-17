// ABC052 B - Increment Decrement
#include <stdio.h>

int main(void) {
    int N;
    char S[101];
    // input
    scanf("%d", &N);
    scanf("%s", S);

    int x = 0;
    int result = 0;
    int i = 0;
    while (S[i] != '\0') {
        if (S[i] == 'I') {
            x++;
        } else {
            x--;
        }
        if (x > result) {
            result = x;
        }
        i++;
    }

    printf("%d\n", result);
}