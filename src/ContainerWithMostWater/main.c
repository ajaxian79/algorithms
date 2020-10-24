#include <stdio.h>

#include "most_water.h"

int main(void) {
    int a[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int b[] = {1, 1};
    printf("%d\n", max_area(a, 9));
    printf("%d\n", max_area(b, 2));
    return 0;
}
