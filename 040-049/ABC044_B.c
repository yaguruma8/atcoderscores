// ABC044 B - 美しい文字列
#include <stdio.h>

int check(char *str) {
    int checkArr[26] = { 0 };
    
    int i = 0;
    while (str[i] != '\0') {
        checkArr[str[i] - 97] += 1;
        i++;
    }

    int result = 0;
    for (i = 0; i < 26; i++) {
        result += checkArr[i] % 2;
    }

    return result;
}


int main(void) {
    char W[101];

    // input
    scanf("%s", W);

    int result = check(W);

    if (result) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
    
    return 0;
    
}
