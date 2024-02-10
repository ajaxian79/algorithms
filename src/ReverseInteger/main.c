#include <stdio.h>

#include "reverse_integer.h"

int main(void) {
    int values[] = {123, -123, 120, 0, 1534236469, -2147483648};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        printf("reverse(%d) = %d\n", values[i], reverse_int(values[i]));
    }

    return 0;
}
