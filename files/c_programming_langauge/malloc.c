#include <stdlib.h>
#include <stdio.h>
int main() {
    int n;
    printf("Enter n: "); scanf("%d", &n);
    int *arr = (int *) malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr + i);
    }
    for (int i = n - 1; i >= 0; --i) {
        printf("%d\n", arr[i]);
    }
    free(arr);
    return 0;
}
