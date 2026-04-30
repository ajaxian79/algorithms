#include <stdio.h>
#include <stdlib.h>

#include "daily_temperatures.h"

int main(void) {
    int t[] = {73, 74, 75, 71, 69, 72, 76, 73};
    int n = 8;
    int* out = days_until_warmer(t, n);
    if (!out) return 1;
    for (int i = 0; i < n; i++) printf("%d%s", out[i], i + 1 < n ? " " : "\n");
    free(out);
    return 0;
}
