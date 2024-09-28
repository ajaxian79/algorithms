//
// Created by ajaxian on 08/31/24.
//

#include "excel_column_title.h"

#include <stdlib.h>
#include <string.h>

char* excel_column_title(int n) {
    if (n < 1) return NULL;

    // Worst case: a 32-bit positive int needs 7 letters (FXSHRXW = 2147483647).
    char buf[16];
    int idx = 0;

    while (n > 0) {
        n--;  // shift to 0-indexed so 0..25 -> 'A'..'Z'
        buf[idx++] = (char)('A' + n % 26);
        n /= 26;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Stable sort matters when a secondary key was set in a prior pass.
// note 2: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Stable sort matters when a secondary key was set in a prior pass.
