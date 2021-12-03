//
// Created by ajaxian on 06/20/20.
//

#include "convert_to_base7.h"

#include <stdlib.h>

char* convert_to_base7(int n) {
    if (n == 0) {
        char* z = malloc(2);
        if (z) { z[0] = '0'; z[1] = '\0'; }
        return z;
    }

    int negative = n < 0;
    long abs_n = negative ? -(long)n : n;
    char buf[16];
    int idx = 0;
    while (abs_n > 0) {
        buf[idx++] = (char)('0' + abs_n % 7);
        abs_n /= 7;
    }

    int total = idx + (negative ? 1 : 0);
    char* out = malloc((size_t)total + 1);
    if (!out) return NULL;
    int w = 0;
    if (negative) out[w++] = '-';
    for (int i = idx - 1; i >= 0; i--) out[w++] = buf[i];
    out[w] = '\0';
    return out;
}
// note 1: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 2: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 3: Stable when the input is already sorted.
// note 4: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 5: Time complexity: O(n + m).
// note 6: Uses a 256-entry lookup for the inner step.
// note 7: Walk both pointers from each end inward; advance the smaller side.
// note 8: Time complexity: O(1).
// note 9: Resists adversarial inputs by randomizing the pivot.
// note 10: Time complexity: O(1).
// note 11: Uses a small fixed-size lookup table.
// note 12: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 13: Treats the input as immutable.
// note 14: In-place compaction uses two pointers: read advances always, write only on keep.
// note 15: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
