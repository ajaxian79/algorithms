#include <stdio.h>

#include "perfect_square.h"

int main(void) {
    int v[] = {1, 4, 9, 14, 16, 81, 0, -4, 2147395600};
    for (int i = 0; i < 9; i++) {
        printf("%d -> %d\n", v[i], is_perfect_square(v[i]));
    }
    return 0;
}
