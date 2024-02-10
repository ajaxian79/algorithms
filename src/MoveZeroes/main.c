#include <stdio.h>

#include "move_zeroes.h"

int main(void) {
    int a[] = {0, 1, 0, 3, 12};
    move_zeroes(a, 5);
    for (int i = 0; i < 5; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
