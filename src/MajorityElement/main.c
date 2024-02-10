#include <stdio.h>

#include "majority_element.h"

int main(void) {
    int a[] = {3, 2, 3};
    int b[] = {2, 2, 1, 1, 1, 2, 2};
    printf("%d\n", majority_element(a, 3));
    printf("%d\n", majority_element(b, 7));
    return 0;
}
