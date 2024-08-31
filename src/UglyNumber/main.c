#include <stdio.h>

#include "ugly_number.h"

int main(void) {
    int v[] = {1, 6, 8, 14, 0, -1, 30, 7};
    for (int i = 0; i < 8; i++) {
        printf("%d -> %d\n", v[i], is_ugly(v[i]));
    }
    return 0;
}
