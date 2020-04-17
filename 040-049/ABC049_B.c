// ABC049 B - たてなが
#include <stdio.h>

int main(void) {
    int H, W;
    scanf("%d %d", &H, &W);
    char Pix[H][W + 1];
    int i = 0;
    for (i = 0; i < H; i++) {
        scanf("%s", &Pix[i][0]);
    }

    for (i = 0; i < H; i++) {
        printf("%s\n", Pix[i]);
        printf("%s\n", Pix[i]);
    }
    return 0;
}