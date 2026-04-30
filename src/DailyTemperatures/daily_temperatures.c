//
// Created by ajaxian on 02/27/25.
//

#include <stdlib.h>

#include "daily_temperatures.h"

int* days_until_warmer(const int* temps, int n) {
    if (!temps || n <= 0) return NULL;

    int* out = (int*)calloc((size_t)n, sizeof(int));
    if (!out) return NULL;

    int* stack = (int*)malloc(sizeof(int) * (size_t)n);
    if (!stack) {
        free(out);
        return NULL;
    }

    int top = 0;
    for (int i = 0; i < n; i++) {
        while (top > 0 && temps[stack[top - 1]] < temps[i]) {
            int j = stack[--top];
            out[j] = i - j;
        }
        stack[top++] = i;
    }
    free(stack);
    return out;
}
