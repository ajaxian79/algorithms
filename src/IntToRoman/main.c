#include <stdio.h>
#include <stdlib.h>

#include "int_to_roman.h"

int main(void) {
    int values[] = {1, 4, 9, 58, 1994, 2024, 3999};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++) {
        char* s = int_to_roman(values[i]);
        printf("%-4d -> %s\n", values[i], s ? s : "(null)");
        free(s);
    }

    return 0;
}
