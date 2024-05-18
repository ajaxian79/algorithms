#include <stdio.h>

#include "power_of_three.h"

int main(void) {
    int v[] = {1, 3, 9, 27, 45, 0, -3, 1162261467};
    for (int i = 0; i < (int)(sizeof(v) / sizeof(v[0])); i++) {
        printf("%d -> %d\n", v[i], is_power_of_three(v[i]));
    }
    return 0;
}
