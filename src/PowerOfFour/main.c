#include <stdio.h>

#include "power_of_four.h"

int main(void) {
    int v[] = {1, 4, 16, 64, 256, 8, 5, 0, -4};
    for (int i = 0; i < (int)(sizeof(v) / sizeof(v[0])); i++) {
        printf("%d -> %d\n", v[i], is_power_of_four(v[i]));
    }
    return 0;
}
