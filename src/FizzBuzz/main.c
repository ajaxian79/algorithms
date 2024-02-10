#include <stdio.h>
#include <stdlib.h>

#include "fizz_buzz.h"

int main(void) {
    int n = 0;
    char** out = fizz_buzz(20, &n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", out[i]);
        free(out[i]);
    }
    free(out);
    return 0;
}
