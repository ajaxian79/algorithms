#include <stdio.h>

#include "remove_duplicates.h"

int main(void) {
    int a[] = {1, 1, 2};
    int n = remove_duplicates_sorted(a, 3);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    int b[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    n = remove_duplicates_sorted(b, 10);
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
