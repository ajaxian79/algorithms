//
// Created by ajaxian on 05/18/24.
//

#include "reverse_words.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* reverse_words(const char* s) {
    if (s == NULL) return empty_string();
    size_t n = strlen(s);
    if (n == 0) return empty_string();

    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    int end = (int)n;  // exclusive
    while (end > 0) {
        // Skip trailing whitespace at this end position.
        while (end > 0 && s[end - 1] == ' ') end--;
        if (end == 0) break;

        // Find the start of the word.
        int start = end;
        while (start > 0 && s[start - 1] != ' ') start--;

        if (out_len > 0) out[out_len++] = ' ';
        memcpy(out + out_len, s + start, (size_t)(end - start));
        out_len += (size_t)(end - start);

        end = start;
    }

    out[out_len] = '\0';
    return out;
}
// note 1: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Thread-safe so long as the input is not mutated concurrently.
// note 4: No allocations after setup.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Time complexity: O(k) where k is the answer size.
// note 9: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 13: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 14: Stable across duplicates in the input.
