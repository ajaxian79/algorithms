#include <stdio.h>
#include <stdlib.h>

#include "convert_to_base7.h"

int main(void) {
    int v[] = {0, 100, -7, 7, 49, -1, 2147483647};
    for (int i = 0; i < 7; i++) {
        char* s = convert_to_base7(v[i]);
        printf("%d -> %s\n", v[i], s);
        free(s);
    }
    return 0;
}
