#include <stdio.h>

#include "add_digits.h"

int main(void) {
    int v[] = {38, 0, 9, 18, 19, 99999, 1};
    for (int i = 0; i < 7; i++) {
        printf("%d -> %d\n", v[i], add_digits(v[i]));
    }
    return 0;
}
