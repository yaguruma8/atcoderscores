// ABC047 B - すぬけ君の塗り絵 2 イージー
#include <stdio.h>

int main(void)
{
    int W, H, N;

    scanf("%d %d %d", &W, &H, &N);

    int S[N][3];
    int i = 0;
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &S[i][0], &S[i][1], &S[i][2]);
    }

    int xStart = 0, xEnd = W, yStart = 0, yEnd = H;
    for (i = 0; i < N; i++) {
        switch (S[i][2]) {
        case 1:
            if (xStart < S[i][0]) {
                xStart = S[i][0];
            }
            break;
        case 2:
            if (xEnd > S[i][0]) {
                xEnd = S[i][0];
            }
            break;
        case 3:
            if (yStart < S[i][1]) {
                yStart = S[i][1];
            }
            break;
        case 4:
            if (yEnd > S[i][1]) {
                yEnd = S[i][1];
            }
            break;
        default:
            break;
        }
    }
    
    int result = (xEnd - xStart) * (yEnd - yStart);
    if (xEnd <= xStart || yEnd <= yStart) {
        result = 0;
    }

    printf("%d\n", result);
    return 0;
}