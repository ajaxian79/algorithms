#include <stdio.h>
#include <stdlib.h>

#include "product_except_self.h"

int main(void) {
    int a[] = {1, 2, 3, 4};
    int n = 0;
    int* r = product_except_self(a, 4, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);

    int b[] = {-1, 1, 0, -3, 3};
    r = product_except_self(b, 5, &n);
    for (int i = 0; i < n; i++) printf("%d ", r[i]);
    printf("\n");
    free(r);
    return 0;
}
