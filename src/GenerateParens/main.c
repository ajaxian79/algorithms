#include <stdio.h>
#include <stdlib.h>

#include "generate_parens.h"

int main(void) {
    for (int n = 1; n <= 4; n++) {
        int count = 0;
        char** items = generate_parens(n, &count);
        printf("n=%d count=%d:\n", n, count);
        for (int i = 0; i < count; i++) {
            printf("  %s\n", items[i]);
            free(items[i]);
        }
        free(items);
    }
    return 0;
}
