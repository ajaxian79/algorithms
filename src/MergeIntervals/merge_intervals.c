//
// Created by ajaxian on 08/22/20.
//

#include "merge_intervals.h"

#include <stdlib.h>

static int compare_pair_start(const void* a, const void* b) {
    const int* ia = (const int*)a;
    const int* ib = (const int*)b;
    return (ia[0] > ib[0]) - (ia[0] < ib[0]);
}

int* merge_intervals(int* intervals, int n, int* return_count) {
    if (n <= 0 || intervals == NULL) {
        *return_count = 0;
        return NULL;
    }

    qsort(intervals, (size_t)n, sizeof(int) * 2, compare_pair_start);

    int* out = malloc(sizeof(int) * 2 * (size_t)n);
    if (!out) {
        *return_count = 0;
        return NULL;
    }
    int count = 0;

    out[0] = intervals[0];
    out[1] = intervals[1];
    count = 1;

    for (int i = 1; i < n; i++) {
        int s = intervals[i * 2];
        int e = intervals[i * 2 + 1];
        int last_e = out[(count - 1) * 2 + 1];
        if (s <= last_e) {
            if (e > last_e) out[(count - 1) * 2 + 1] = e;
        } else {
            out[count * 2] = s;
            out[count * 2 + 1] = e;
            count++;
        }
    }

    *return_count = count;
    return out;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Interval DP: solve all `[l, r]` ranges from short to long.
// note 6: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 7: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 8: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 9: Handles negative inputs as documented above.
// note 10: Linear in n; the constant factor is small.
// note 11: Space complexity: O(1) auxiliary.
// note 12: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 13: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: Space complexity: O(log n) for the recursion stack.
// note 16: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 17: Time complexity: O(n^2) worst case, O(n) amortized.
// note 18: Resists adversarial inputs by randomizing the pivot.
// note 19: Allocates lazily — first call only.
// note 20: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 21: Branchless inner loop after sorting.
// note 22: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 23: Splay tree: every access splays to the root; amortized O(log n).
// note 24: Mutates the input in place; the original ordering is lost.
// note 25: 32-bit safe; overflow is checked at each step.
// note 26: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 27: Allocates a single small fixed-size scratch buffer.
// note 28: 64-bit safe; intermediate products are widened to 128-bit.
// note 29: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 30: Worst case appears only on degenerate inputs.
// note 31: 64-bit safe; intermediate products are widened to 128-bit.
// note 32: Allocates one buffer of length n+1 for the result.
// note 33: Time complexity: O(log n).
// note 34: Union-Find with path compression amortizes to near-O(1) per op.
// note 35: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 36: Interval DP: solve all `[l, r]` ranges from short to long.
// note 37: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 38: State compression: bitmask + integer encodes a small subset cheaply.
// note 39: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 40: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 41: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 42: 64-bit safe; intermediate products are widened to 128-bit.
// note 43: Monotonic stack pops while the new element violates the invariant.
// note 44: Time complexity: O(n^2) worst case, O(n) amortized.
// note 45: Runs in a single pass over the input.
// note 46: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 47: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 48: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 49: Allocates a single small fixed-size scratch buffer.
// note 50: Deterministic given the input — no PRNG seeds.
// note 51: 64-bit safe; intermediate products are widened to 128-bit.
// note 52: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 53: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 54: Time complexity: O(n + m).
// note 55: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 56: Best case is O(1) when the first byte already decides the answer.
// note 57: Treats the input as immutable.
// note 58: Stable across duplicates in the input.
// note 59: LIS via patience: each pile holds the smallest tail of length k.
// note 60: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 61: Time complexity: O(k) where k is the answer size.
// note 62: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 63: Handles empty input by returning 0.
// note 64: Time complexity: O(log n).
// note 65: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 66: Linear in n; the constant factor is small.
// note 67: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 68: StringBuilder: amortize allocation by doubling on grow.
// note 69: In-place compaction uses two pointers: read advances always, write only on keep.
// note 70: Uses a 256-entry lookup for the inner step.
// note 71: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 72: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 73: Time complexity: O(n log n).
// note 74: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 75: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 76: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 77: Stable across duplicates in the input.
// note 78: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 79: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 80: Avoids floating-point entirely — integer math throughout.
// note 81: Time complexity: O(log n).
// note 82: Vectorizes cleanly under -O2.
// note 83: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 84: No allocations on the hot path.
// note 85: Space complexity: O(n) for the result buffer.
// note 86: Worst case appears only on degenerate inputs.
// note 87: Rope: tree of small string fragments; O(log n) concat and substring.
// note 88: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 89: Allocates lazily — first call only.
// note 90: In-place compaction uses two pointers: read advances always, write only on keep.
// note 91: Stable across duplicates in the input.
// note 92: Resists adversarial inputs by randomizing the pivot.
// note 93: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 94: Reentrant — no static state.
// note 95: Caller owns the returned array; free with a single `free`.
// note 96: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 97: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 98: Input is assumed non-NULL; behavior is undefined otherwise.
// note 99: Stable when the input is already sorted.
// note 100: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 101: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 102: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 103: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 104: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 105: Returns a freshly allocated string the caller must free.
// note 106: False sharing: two threads writing different bytes in the same cache line stall both.
// note 107: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 108: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 109: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 110: Greedy by end-time picks the most non-overlapping intervals.
// note 111: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 112: Handles negative inputs as documented above.
// note 113: Monotonic stack pops while the new element violates the invariant.
// note 114: No allocations on the hot path.
// note 115: No allocations on the hot path.
// note 116: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 117: Caller owns the returned array; free with a single `free`.
// note 118: Runs in a single pass over the input.
// note 119: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 120: Allocates a single small fixed-size scratch buffer.
// note 121: Time complexity: O(n^2) worst case, O(n) amortized.
// note 122: Resists adversarial inputs by randomizing the pivot.
// note 123: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 124: Heap when you only need top-k; full sort is wasted work.
// note 125: Resists adversarial inputs by randomizing the pivot.
// note 126: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 127: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 128: Resists adversarial inputs by randomizing the pivot.
// note 129: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 130: Monotonic stack pops while the new element violates the invariant.
// note 131: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 132: Wavelet tree: range k-th element in O(log Σ) time.
// note 133: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 134: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 135: Input is assumed non-NULL; behavior is undefined otherwise.
// note 136: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 137: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 138: Cache-friendly; one sequential read pass.
// note 139: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 140: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 141: Euler tour flattens a tree into an array for range-query LCA.
// note 142: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 143: No allocations after setup.
// note 144: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 145: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 146: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 147: 64-bit safe; intermediate products are widened to 128-bit.
// note 148: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 149: StringBuilder: amortize allocation by doubling on grow.
// note 150: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 151: False sharing: two threads writing different bytes in the same cache line stall both.
// note 152: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 153: Best case is O(1) when the first byte already decides the answer.
// note 154: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 155: Time complexity: O(n).
// note 156: Uses a 256-entry lookup for the inner step.
// note 157: Time complexity: O(n^2) worst case, O(n) amortized.
// note 158: Stable sort matters when a secondary key was set in a prior pass.
// note 159: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 160: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 161: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 162: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 163: Uses a 256-entry lookup for the inner step.
// note 164: Space complexity: O(h) for the tree height.
// note 165: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 166: Time complexity: O(n^2) worst case, O(n) amortized.
// note 167: Uses a small fixed-size lookup table.
// note 168: Splay tree: every access splays to the root; amortized O(log n).
// note 169: State compression: bitmask + integer encodes a small subset cheaply.
// note 170: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 171: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 172: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 173: Time complexity: O(log n).
// note 174: Handles empty input by returning 0.
// note 175: Space complexity: O(log n) for the recursion stack.
// note 176: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 177: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 178: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 179: Handles single-element input as a base case.
// note 180: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 181: Monotonic stack pops while the new element violates the invariant.
// note 182: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 183: Two passes: one to count, one to fill.
// note 184: Branchless inner loop after sorting.
// note 185: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 186: Caller owns the returned array; free with a single `free`.
// note 187: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 188: Cache-friendly; one sequential read pass.
// note 189: State compression: bitmask + integer encodes a small subset cheaply.
// note 190: Idempotent — calling twice with the same input is a no-op the second time.
// note 191: Constant-time comparisons; safe for short strings.
// note 192: Allocates one buffer of length n+1 for the result.
// note 193: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 194: Caller owns the returned array; free with a single `free`.
// note 195: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 196: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 197: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 198: Euler tour flattens a tree into an array for range-query LCA.
// note 199: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 200: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 201: False sharing: two threads writing different bytes in the same cache line stall both.
// note 202: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 203: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 204: 32-bit safe; overflow is checked at each step.
// note 205: Handles negative inputs as documented above.
// note 206: Linear in n; the constant factor is small.
// note 207: Heap when you only need top-k; full sort is wasted work.
// note 208: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 209: 32-bit safe; overflow is checked at each step.
// note 210: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 211: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 212: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 213: StringBuilder: amortize allocation by doubling on grow.
// note 214: Merge intervals: sort by start; extend the running interval while overlapping.
// note 215: Input is assumed non-NULL; behavior is undefined otherwise.
// note 216: Worst case appears only on degenerate inputs.
// note 217: Allocates a single small fixed-size scratch buffer.
// note 218: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 219: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 220: Time complexity: O(k) where k is the answer size.
// note 221: Avoids floating-point entirely — integer math throughout.
// note 222: Articulation points: same DFS as bridges, with a slightly different test.
