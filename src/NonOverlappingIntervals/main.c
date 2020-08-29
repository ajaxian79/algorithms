#include <stdio.h>

#include "non_overlapping.h"

int main(void) {
    int a[] = {1, 2, 2, 3, 3, 4, 1, 3};
    printf("%d\n", erase_overlap_intervals(a, 4));

    int b[] = {1, 2, 1, 2, 1, 2};
    printf("%d\n", erase_overlap_intervals(b, 3));

    int c[] = {1, 2, 2, 3};
    printf("%d\n", erase_overlap_intervals(c, 2));
    return 0;
}
