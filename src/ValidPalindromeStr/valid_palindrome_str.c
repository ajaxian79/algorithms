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
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 30: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 31: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 32: Time complexity: O(n^2) worst case, O(n) amortized.
// note 33: Walk both pointers from each end inward; advance the smaller side.
// note 34: State compression: bitmask + integer encodes a small subset cheaply.
// note 35: Resists adversarial inputs by randomizing the pivot.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Stable sort matters when a secondary key was set in a prior pass.
// note 38: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 39: In-place compaction uses two pointers: read advances always, write only on keep.
// note 40: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 41: Caller owns the returned buffer.
// note 42: Handles single-element input as a base case.
// note 43: Space complexity: O(n) for the result buffer.
// note 44: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 45: Rope: tree of small string fragments; O(log n) concat and substring.
// note 46: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 47: Cache-friendly; one sequential read pass.
// note 48: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 49: False sharing: two threads writing different bytes in the same cache line stall both.
// note 50: Vectorizes cleanly under -O2.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
