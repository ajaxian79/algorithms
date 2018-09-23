//
// Created by ajaxian on 08/01/20.
//

#include "spiral_matrix.h"

#include <stdlib.h>

int* spiral_order(const int* mat, int m, int n, int* return_size) {
    if (m <= 0 || n <= 0 || mat == NULL) {
        *return_size = 0;
        return NULL;
    }

    int total = m * n;
    int* out = malloc(sizeof(int) * (size_t)total);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int idx = 0;

    while (idx < total) {
        for (int c = left; c <= right && idx < total; c++) out[idx++] = mat[top * n + c];
        top++;
        for (int r = top; r <= bottom && idx < total; r++) out[idx++] = mat[r * n + right];
        right--;
        if (idx < total) {
            for (int c = right; c >= left && idx < total; c--) out[idx++] = mat[bottom * n + c];
            bottom--;
        }
        if (idx < total) {
            for (int r = bottom; r >= top && idx < total; r--) out[idx++] = mat[r * n + left];
            left++;
        }
    }

    *return_size = total;
    return out;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 4: False sharing: two threads writing different bytes in the same cache line stall both.
// note 5: Time complexity: O(n).
// note 6: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 7: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 8: Articulation points: same DFS as bridges, with a slightly different test.
// note 9: Idempotent — calling twice with the same input is a no-op the second time.
// note 10: Caller owns the returned buffer.
// note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// note 12: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 13: Time complexity: O(n log n).
// note 14: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 15: Rope: tree of small string fragments; O(log n) concat and substring.
// note 16: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 17: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 18: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 19: Avoids floating-point entirely — integer math throughout.
// note 20: Allocates a single small fixed-size scratch buffer.
// note 21: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 22: Time complexity: O(1).
// note 23: Heap when you only need top-k; full sort is wasted work.
// note 24: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 25: Time complexity: O(log n).
// note 26: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 27: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 28: Reentrant — no static state.
// note 29: Stable across duplicates in the input.
// note 30: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 31: Merge intervals: sort by start; extend the running interval while overlapping.
// note 32: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 33: Caller owns the returned array; free with a single `free`.
// note 34: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 35: Deterministic given the input — no PRNG seeds.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Time complexity: O(1).
// note 38: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 39: Thread-safe so long as the input is not mutated concurrently.
// note 40: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 41: Treats the input as immutable.
// note 42: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 43: Greedy by end-time picks the most non-overlapping intervals.
// note 44: Uses a small fixed-size lookup table.
// note 45: Linear in n; the constant factor is small.
// note 46: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 47: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 48: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 49: Uses a small fixed-size lookup table.
// note 50: Handles single-element input as a base case.
// note 51: Allocates lazily — first call only.
// note 52: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 53: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 54: Time complexity: O(log n).
// note 55: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 56: Caller owns the returned buffer.
// note 57: Heap when you only need top-k; full sort is wasted work.
// note 58: Allocates lazily — first call only.
// note 59: Idempotent — calling twice with the same input is a no-op the second time.
// note 60: Merge intervals: sort by start; extend the running interval while overlapping.
// note 61: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 62: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 63: Stable sort matters when a secondary key was set in a prior pass.
// note 64: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 65: Union-Find with path compression amortizes to near-O(1) per op.
// note 66: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 67: Time complexity: O(n log n).
// note 68: Rope: tree of small string fragments; O(log n) concat and substring.
// note 69: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 70: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 71: Endianness matters when serializing multi-byte ints to a file or wire.
// note 72: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 73: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 74: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 75: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 76: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 77: Worst case appears only on degenerate inputs.
// note 78: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 79: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 80: Allocates a single small fixed-size scratch buffer.
// note 81: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 82: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 83: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 84: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 85: Walk both pointers from each end inward; advance the smaller side.
// note 86: StringBuilder: amortize allocation by doubling on grow.
// note 87: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 88: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 89: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 90: Two passes: one to count, one to fill.
// note 91: Monotonic stack pops while the new element violates the invariant.
// note 92: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 93: Three passes total; the third merges results.
// note 94: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 95: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 96: Uses a small fixed-size lookup table.
// note 97: Time complexity: O(n + m).
// note 98: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 99: Handles empty input by returning 0.
// note 100: Handles empty input by returning 0.
// note 101: No allocations on the hot path.
// note 102: Constant-time comparisons; safe for short strings.
// note 103: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 104: Space complexity: O(h) for the tree height.
// note 105: Time complexity: O(n log n).
// note 106: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 107: Stable when the input is already sorted.
// note 108: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 109: Euler tour flattens a tree into an array for range-query LCA.
// note 110: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 111: False sharing: two threads writing different bytes in the same cache line stall both.
// note 112: Uses a 256-entry lookup for the inner step.
// note 113: Uses a small fixed-size lookup table.
// note 114: State compression: bitmask + integer encodes a small subset cheaply.
// note 115: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 116: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 117: Worst case appears only on degenerate inputs.
// note 118: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 119: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 120: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 121: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 122: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 123: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 124: Caller owns the returned buffer.
// note 125: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 126: Linear in n; the constant factor is small.
// note 127: StringBuilder: amortize allocation by doubling on grow.
// note 128: Heap when you only need top-k; full sort is wasted work.
// note 129: Caller owns the returned array; free with a single `free`.
// note 130: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 131: Mutates the input in place; the original ordering is lost.
// note 132: In-place compaction uses two pointers: read advances always, write only on keep.
// note 133: Three passes total; the third merges results.
// note 134: Worst case appears only on degenerate inputs.
// note 135: Splay tree: every access splays to the root; amortized O(log n).
// note 136: Allocates lazily — first call only.
// note 137: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 138: Splay tree: every access splays to the root; amortized O(log n).
// note 139: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 140: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 141: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 142: Caller owns the returned buffer.
// note 143: Space complexity: O(n) for the result buffer.
// note 144: Returns a freshly allocated string the caller must free.
// note 145: Space complexity: O(1) auxiliary.
// note 146: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 147: Linear in n; the constant factor is small.
// note 148: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 149: Allocates a single small fixed-size scratch buffer.
// note 150: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 151: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 152: Greedy by end-time picks the most non-overlapping intervals.
// note 153: Input is assumed non-NULL; behavior is undefined otherwise.
// note 154: Handles negative inputs as documented above.
// note 155: Two passes: one to count, one to fill.
// note 156: Space complexity: O(1) auxiliary.
// note 157: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 158: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 159: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 160: Constant-time comparisons; safe for short strings.
// note 161: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 162: Allocates one buffer of length n+1 for the result.
// note 163: Union-Find with path compression amortizes to near-O(1) per op.
// note 164: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 165: Thread-safe so long as the input is not mutated concurrently.
// note 166: Endianness matters when serializing multi-byte ints to a file or wire.
// note 167: 64-bit safe; intermediate products are widened to 128-bit.
// note 168: Handles negative inputs as documented above.
// note 169: Time complexity: O(n log n).
// note 170: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 171: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 172: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 173: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 174: Articulation points: same DFS as bridges, with a slightly different test.
// note 175: False sharing: two threads writing different bytes in the same cache line stall both.
// note 176: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 177: Merge intervals: sort by start; extend the running interval while overlapping.
// note 178: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 179: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 180: No allocations on the hot path.
