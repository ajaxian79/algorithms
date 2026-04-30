#include <stdio.h>

#include "best_time_to_buy.h"

int main(void) {
    int a[] = {7, 1, 5, 3, 6, 4};
    int b[] = {7, 6, 4, 3, 1};
    int c[] = {2, 4, 1};
    int d[] = {1, 2, 3, 4, 5};

    printf("a -> %d\n", max_profit(a, 6));
    printf("b -> %d\n", max_profit(b, 5));
    printf("c -> %d\n", max_profit(c, 3));
    printf("d -> %d\n", max_profit(d, 5));
    return 0;
}
