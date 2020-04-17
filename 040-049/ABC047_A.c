// ABC047 A - キャンディーと2人の子供
#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int ab = a + b;
    int ac = a + c;
    int bc = b + c;

    if (a == bc || b == ac || c == ab) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}