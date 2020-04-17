// ABC042 B

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return strcmp((char*)a, (char*)b);
}

int main(void)
{
    int N, L;
    int i = 0;

    // input
    scanf("%d %d", &N, &L);

    char S[N][L + 1];

    for (i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }

    qsort(S, N, L + 1, compare);

    // output
    for (i = 0; i < N; i++) {
        printf("%s", S[i]);
    }
    printf("\n");
    return 0;
}