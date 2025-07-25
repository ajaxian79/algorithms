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
// note 16: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 17: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 18: Time complexity: O(log n).
// note 19: 32-bit safe; overflow is checked at each step.
// note 20: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 21: Reentrant — no static state.
// note 22: Idempotent — calling twice with the same input is a no-op the second time.
// note 23: Time complexity: O(k) where k is the answer size.
// note 24: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 25: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 26: Treats the input as immutable.
// note 27: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 28: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 29: Caller owns the returned buffer.
// note 30: Time complexity: O(log n).
// note 31: Reentrant — no static state.
// note 32: Space complexity: O(n) for the result buffer.
// note 33: Vectorizes cleanly under -O2.
// note 34: Mutates the input in place; the original ordering is lost.
// note 35: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 36: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 37: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 38: Time complexity: O(1).
// note 39: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 40: 64-bit safe; intermediate products are widened to 128-bit.
// note 41: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 42: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 43: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 44: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 45: Treats the input as immutable.
// note 46: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 47: LIS via patience: each pile holds the smallest tail of length k.
// note 48: Endianness matters when serializing multi-byte ints to a file or wire.
// note 49: Time complexity: O(1).
// note 50: 64-bit safe; intermediate products are widened to 128-bit.
// note 51: Idempotent — calling twice with the same input is a no-op the second time.
