// ABC053 B - A to Z String
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *S;
    S = malloc(sizeof(char) * 200001);
    scanf("%s", S);

    int start = -1;
    int i = 0;
    while (S[i] != '\0') {
        if (S[i] == 'A') {
            if (start == -1) {
            start = i;
            }
        }
        i++;
    }
    int end = i + 1;
    while (i > start) {
        if (S[i] == 'Z') {
            end = i;
            break;
        }
        i--;
    }
    
    printf("%d\n", end - start + 1);

    return 0;

}