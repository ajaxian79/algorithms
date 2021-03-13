#include <stdio.h>

#include "remove_element.h"

int main(void) {
    int a[] = {3, 2, 2, 3};
    int n = remove_element(a, 4, 3);
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");

    int b[] = {0, 1, 2, 2, 3, 0, 4, 2};
    n = remove_element(b, 8, 2);
    for (int i = 0; i < n; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
