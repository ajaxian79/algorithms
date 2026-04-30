#include <stdio.h>

#include "house_robber.h"

int main(void) {
    int a[] = {1, 2, 3, 1};
    int b[] = {2, 7, 9, 3, 1};
    int c[] = {2, 1, 1, 2};

    printf("a -> %d\n", rob(a, 4));
    printf("b -> %d\n", rob(b, 5));
    printf("c -> %d\n", rob(c, 4));
    return 0;
}
