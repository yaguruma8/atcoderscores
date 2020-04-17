// ABC043 B - バイナリハックイージー
#include <stdio.h>

void pop(char *str, int *top) {
    if (*top == 0) {
        return;
    }
    *top -= 1;
    return;
}

void push(char *str, int *top, char c) {
    str[*top] = c;
    *top += 1;
    return;
}

int main(void) {
    char S[11];
    char result[11];
    // input 
    scanf("%s", S);

    int i = 0;
    int top = 0;
    while(S[i] !='\0') {
        if (S[i] == 'B') {
            pop(result, &top);
        } else {
            push(result, &top, S[i]);
        }
        i++;
    }
    result[top] = '\0';
    // output
    printf("%s\n", result);

    return 0;

}