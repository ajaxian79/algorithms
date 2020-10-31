#include <stdio.h>

#include "trap.h"

int main(void) {
    int a[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int b[] = {4, 2, 0, 3, 2, 5};
    printf("%d\n", trap(a, 12));
    printf("%d\n", trap(b, 6));
    return 0;
}
