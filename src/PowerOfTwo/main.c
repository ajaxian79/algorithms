#include <stdio.h>

#include "power_of_two.h"

int main(void) {
    int v[] = {1, 2, 3, 4, 16, 218, 1024, 0, -1};
    for (int i = 0; i < (int)(sizeof(v) / sizeof(v[0])); i++) {
        printf("%d -> %d\n", v[i], is_power_of_two(v[i]));
    }
    return 0;
}
