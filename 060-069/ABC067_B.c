// ABC067 B - Snake Toy
#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

// void printarray(int *arr, int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d, ", arr[i]);
//     }
//     printf("\n");
//     return;
// }


int main(void)
{
    int N, K;
    scanf("%d %d", &N, &K);
    int l[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &l[i]);
    }
    qsort(l, N, sizeof(int), comp);
    // printarray(l, N);
    int result = 0;
    for (int i = N - 1; i > N - K - 1; i--) {
        result += l[i];
    }
    printf("%d\n", result);

    return 0;
}