// ABC045 B - 3人でカードゲームイージー

#include <stdio.h>

int main(void) {
    char A[101];
    char B[101];
    char C[101];

    // input
    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);

    int a_top = 0, b_top = 0, c_top = 0;
    char next;
    char winner;

    next = A[a_top++];

    while(1) {
        if (next == 'a') {
            next = A[a_top++];
            if (next =='\0') {
                winner = 'A';
                break;
            }
        } else if (next == 'b') {
            next = B[b_top++];
            if (next == '\0') {
                winner = 'B';
                break;
            }
        } else if (next == 'c') {
            next = C[c_top++];
            if (next == '\0') {
                winner = 'C';
                break;
            }
        }
    }

    // output
    printf("%c\n", winner);

    return 0;

}