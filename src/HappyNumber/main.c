#include <stdio.h>

#include "happy_number.h"

int main(void) {
    int v[] = {1, 7, 19, 2, 4, 100};
    for (int i = 0; i < 6; i++) {
        printf("%d -> %d\n", v[i], is_happy(v[i]));
    }
    return 0;
}
