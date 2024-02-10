#include <stdio.h>

#include "single_number.h"

int main(void) {
    int a[] = {2, 2, 1};
    int b[] = {4, 1, 2, 1, 2};
    int c[] = {99};
    printf("%d\n", single_number(a, 3));
    printf("%d\n", single_number(b, 5));
    printf("%d\n", single_number(c, 1));
    return 0;
}
