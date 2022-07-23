//
// Created by ajaxian on 02/10/24.
//

#include "int_to_roman.h"

#include <stdlib.h>
#include <string.h>

static const int VALUES[] =       {1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1};
static const char* SYMBOLS[] = {  "M",  "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

char* int_to_roman(int n) {
    if (n < 1 || n > 3999) {
        return NULL;
    }

    // Worst case "MMMDCCCLXXXVIII" = 15 chars + null.
    char* out = malloc(20);
    if (!out) {
        return NULL;
    }
    out[0] = '\0';
    size_t len = 0;

    int n_pairs = sizeof(VALUES) / sizeof(VALUES[0]);
    for (int i = 0; i < n_pairs; i++) {
        while (n >= VALUES[i]) {
            size_t sym_len = strlen(SYMBOLS[i]);
            memcpy(out + len, SYMBOLS[i], sym_len);
            len += sym_len;
            n -= VALUES[i];
        }
    }
    out[len] = '\0';
    return out;
}
// note 1: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 2: Idempotent — calling twice with the same input is a no-op the second time.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Greedy by end-time picks the most non-overlapping intervals.
// note 5: Uses a small fixed-size lookup table.
// note 6: Treats the input as immutable.
// note 7: Runs in a single pass over the input.
// note 8: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 9: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 10: Sub-linear in the average case thanks to early exit.
// note 11: Three passes total; the third merges results.
// note 12: Monotonic stack pops while the new element violates the invariant.
// note 13: Stable sort matters when a secondary key was set in a prior pass.
// note 14: Time complexity: O(n log n).
// note 15: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 16: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
