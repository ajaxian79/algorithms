#include <stdio.h>

#include "contains_duplicate.h"

int main(void) {
    int a[] = {1, 2, 3, 1};
    int b[] = {1, 2, 3, 4};
    int c[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    printf("%d\n", contains_duplicate(a, 4));
    printf("%d\n", contains_duplicate(b, 4));
    printf("%d\n", contains_duplicate(c, 10));
    return 0;
}
