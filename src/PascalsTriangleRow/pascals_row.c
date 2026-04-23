//
// Created by ajaxian on 06/27/20.
//

#include "pascals_row.h"

#include <stdlib.h>

int* pascals_triangle_row(int row_index, int* return_size) {
    if (row_index < 0) {
        *return_size = 0;
        return NULL;
    }
    int n = row_index + 1;
    int* row = malloc(sizeof(int) * (size_t)n);
    if (!row) {
        *return_size = 0;
        return NULL;
    }
    for (int i = 0; i < n; i++) row[i] = 0;
    row[0] = 1;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = row[j] + row[j - 1];
        }
    }
    *return_size = n;
    return row;
}
// note 1: Time complexity: O(n).
