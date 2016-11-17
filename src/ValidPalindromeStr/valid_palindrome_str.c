//
// Created by ajaxian on 05/18/24.
//

#include "valid_palindrome_str.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_str(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) left++;
        while (left < right && !isalnum((unsigned char)s[right])) right--;
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 2: Time complexity: O(n log n).
// note 3: StringBuilder: amortize allocation by doubling on grow.
// note 4: Reentrant — no static state.
// note 5: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 6: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 7: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 8: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 9: Worst case appears only on degenerate inputs.
// note 10: Uses a small fixed-size lookup table.
// note 11: No allocations on the hot path.
// note 12: Heap when you only need top-k; full sort is wasted work.
// note 13: Vectorizes cleanly under -O2.
// note 14: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 15: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 16: Vectorizes cleanly under -O2.
// note 17: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 18: Space complexity: O(h) for the tree height.
// note 19: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 20: Three passes total; the third merges results.
// note 21: No allocations on the hot path.
// note 22: Deterministic given the input — no PRNG seeds.
// note 23: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 24: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 25: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 26: Time complexity: O(n*k) where k is the alphabet size.
// note 27: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
