// ABC062 B - Picture Frame
#include <stdio.h>

int main(void) {
    int H, W;
    scanf("%d %d", &H, &W);
    char a[101][101];
    for (int i = 0; i < H; i++) {
        scanf("%s", &a[i][0]);
    }
    // 上
    for (int i = 0; i < W + 2; i++) {
        printf("#");
    }
    printf("\n");
    // 中身
    for (int i = 0; i < H; i++) {
        printf("#");
        printf("%s", a[i]);
        printf("#\n");
    }
    // 下
    for (int i = 0; i < W + 2; i++) {
        printf("#");
    }
    printf("\n");
    
    return 0;
}