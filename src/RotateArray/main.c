#include <stdio.h>

#include "rotate_array.h"

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    rotate_array(a, 7, 3);
    for (int i = 0; i < 7; i++) printf("%d ", a[i]);
    printf("\n");

    int b[] = {-1, -100, 3, 99};
    rotate_array(b, 4, 2);
    for (int i = 0; i < 4; i++) printf("%d ", b[i]);
    printf("\n");
    return 0;
}
