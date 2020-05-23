#include <stdio.h>
#include <stdlib.h>

#include "to_hex.h"

int main(void) {
    int v[] = {26, -1, 0, 255, -2, 2147483647};
    for (int i = 0; i < 6; i++) {
        char* s = to_hex_string(v[i]);
        printf("%d -> %s\n", v[i], s);
        free(s);
    }
    return 0;
}
