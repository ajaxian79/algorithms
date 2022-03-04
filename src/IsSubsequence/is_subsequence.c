//
// Created by ajaxian on 08/31/24.
//

#include "is_subsequence.h"

#include <stddef.h>

int is_subsequence(const char* s, const char* t) {
    if (s == NULL || s[0] == '\0') return 1;
    if (t == NULL) return 0;
    int i = 0;
    for (int j = 0; t[j] != '\0'; j++) {
        if (s[i] == t[j]) {
            i++;
            if (s[i] == '\0') return 1;
        }
    }
    return s[i] == '\0';
}
// note 1: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 2: Uses a 256-entry lookup for the inner step.
// note 3: Walk both pointers from each end inward; advance the smaller side.
// note 4: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 7: Time complexity: O(n log n).
// note 8: Caller owns the returned array; free with a single `free`.
// note 9: Runs in a single pass over the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 13: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
