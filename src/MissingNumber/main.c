#include <stdio.h>

#include "missing_number.h"

int main(void) {
    int a[] = {3, 0, 1};
    int b[] = {0, 1};
    int c[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    printf("%d\n", missing_number(a, 3));
    printf("%d\n", missing_number(b, 2));
    printf("%d\n", missing_number(c, 9));
    return 0;
}
