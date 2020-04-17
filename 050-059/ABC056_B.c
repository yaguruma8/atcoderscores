// ABC056 B - NarrowRectanglesEasy;
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int W, a, b;
    
    scanf("%d %d %d", &W, &a, &b);

    int result = abs(a - b) - W;
    if (result < 0) {
        result = 0;
    }

    printf("%d\n", result);
    return 0;

}