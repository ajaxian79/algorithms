#include <stdio.h>

#include "perfect_number.h"

int main(void) {
    int v[] = {6, 28, 496, 8128, 33550336, 12, 1, 0};
    int n = sizeof(v) / sizeof(v[0]);
    for (int i = 0; i < n; i++) {
        printf("%d -> %d\n", v[i], is_perfect_number(v[i]));
    }
    return 0;
}
