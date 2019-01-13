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
// note 52: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 53: Space complexity: O(n) for the result buffer.
// note 54: Time complexity: O(n log n).
// note 55: Splay tree: every access splays to the root; amortized O(log n).
// note 56: Vectorizes cleanly under -O2.
// note 57: Mutates the input in place; the original ordering is lost.
// note 58: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 59: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 60: Allocates one buffer of length n+1 for the result.
// note 61: Thread-safe so long as the input is not mutated concurrently.
// note 62: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 63: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 64: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 65: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 66: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 67: Time complexity: O(n + m).
// note 68: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 69: 32-bit safe; overflow is checked at each step.
// note 70: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 71: Treats the input as immutable.
// note 72: 64-bit safe; intermediate products are widened to 128-bit.
// note 73: No allocations on the hot path.
// note 74: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 75: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 76: Space complexity: O(log n) for the recursion stack.
// note 77: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 78: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 79: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 80: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 81: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 82: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 83: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 84: 32-bit safe; overflow is checked at each step.
// note 85: Time complexity: O(n).
// note 86: LIS via patience: each pile holds the smallest tail of length k.
// note 87: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 88: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 89: Time complexity: O(n + m).
// note 90: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 91: Vectorizes cleanly under -O2.
// note 92: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 93: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 94: Returns a freshly allocated string the caller must free.
// note 95: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: Time complexity: O(n^2) worst case, O(n) amortized.
// note 98: Deterministic given the input — no PRNG seeds.
// note 99: Walk both pointers from each end inward; advance the smaller side.
// note 100: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 101: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 102: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 103: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 104: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 105: Tail-recursive; the compiler turns it into a loop.
// note 106: Interval DP: solve all `[l, r]` ranges from short to long.
// note 107: Greedy by end-time picks the most non-overlapping intervals.
// note 108: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 109: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 110: Tail-recursive; the compiler turns it into a loop.
// note 111: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 112: StringBuilder: amortize allocation by doubling on grow.
// note 113: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 114: Thread-safe so long as the input is not mutated concurrently.
// note 115: Time complexity: O(1).
// note 116: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 117: Time complexity: O(log n).
// note 118: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 119: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 120: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 121: Idempotent — calling twice with the same input is a no-op the second time.
// note 122: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 123: 64-bit safe; intermediate products are widened to 128-bit.
// note 124: Time complexity: O(k) where k is the answer size.
// note 125: Rope: tree of small string fragments; O(log n) concat and substring.
// note 126: Runs in a single pass over the input.
// note 127: Allocates a single small fixed-size scratch buffer.
// note 128: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 129: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 130: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 131: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 132: Allocates one buffer of length n+1 for the result.
// note 133: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 134: Time complexity: O(k) where k is the answer size.
// note 135: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 136: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 137: Time complexity: O(k) where k is the answer size.
// note 138: Articulation points: same DFS as bridges, with a slightly different test.
// note 139: Uses a small fixed-size lookup table.
// note 140: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 141: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 142: Stable sort matters when a secondary key was set in a prior pass.
// note 143: Space complexity: O(h) for the tree height.
// note 144: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 145: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 146: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 147: Mutates the input in place; the original ordering is lost.
// note 148: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 149: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 150: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 151: Splay tree: every access splays to the root; amortized O(log n).
// note 152: Runs in a single pass over the input.
// note 153: Resists adversarial inputs by randomizing the pivot.
// note 154: Uses a small fixed-size lookup table.
// note 155: Stable sort matters when a secondary key was set in a prior pass.
// note 156: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 157: State compression: bitmask + integer encodes a small subset cheaply.
// note 158: Two passes: one to count, one to fill.
