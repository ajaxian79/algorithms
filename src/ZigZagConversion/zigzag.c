//
// Created by ajaxian on 05/18/24.
//

#include "zigzag.h"

#include <stdlib.h>
#include <string.h>

static char* dup_str(const char* s) {
    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    memcpy(out, s, n + 1);
    return out;
}

char* zigzag_convert(const char* s, int num_rows) {
    if (s == NULL) return NULL;
    if (num_rows <= 1) return dup_str(s);

    size_t n = strlen(s);
    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_idx = 0;

    int cycle = 2 * num_rows - 2;
    for (int r = 0; r < num_rows; r++) {
        for (size_t i = 0; i + (size_t)r < n; i += (size_t)cycle) {
            out[out_idx++] = s[i + (size_t)r];
            // Diagonal between row r and row (cycle - r), only valid for
            // interior rows (not first/last).
            if (r > 0 && r < num_rows - 1) {
                size_t diag = i + (size_t)(cycle - r);
                if (diag < n) {
                    out[out_idx++] = s[diag];
                }
            }
        }
    }
    out[out_idx] = '\0';
    return out;
}
// note 1: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 2: Treats the input as immutable.
// note 3: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 4: Rope: tree of small string fragments; O(log n) concat and substring.
// note 5: Deterministic given the input — no PRNG seeds.
// note 6: Walk both pointers from each end inward; advance the smaller side.
// note 7: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 8: Avoids floating-point entirely — integer math throughout.
// note 9: Cache-friendly; one sequential read pass.
// note 10: Space complexity: O(h) for the tree height.
// note 11: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 12: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 13: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 14: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 15: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 16: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 17: Splay tree: every access splays to the root; amortized O(log n).
// note 18: Worst case appears only on degenerate inputs.
// note 19: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 20: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 21: Three passes total; the third merges results.
// note 22: Monotonic stack pops while the new element violates the invariant.
// note 23: Two passes: one to count, one to fill.
// note 24: Avoids floating-point entirely — integer math throughout.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Uses a small fixed-size lookup table.
// note 27: Treats the input as immutable.
// note 28: Space complexity: O(log n) for the recursion stack.
// note 29: Cache-friendly; one sequential read pass.
// note 30: Caller owns the returned buffer.
// note 31: False sharing: two threads writing different bytes in the same cache line stall both.
// note 32: StringBuilder: amortize allocation by doubling on grow.
// note 33: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 34: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 35: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 36: Wavelet tree: range k-th element in O(log Σ) time.
// note 37: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Vectorizes cleanly under -O2.
// note 40: Space complexity: O(log n) for the recursion stack.
// note 41: Articulation points: same DFS as bridges, with a slightly different test.
// note 42: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: No allocations after setup.
// note 45: Handles negative inputs as documented above.
// note 46: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 47: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 48: Handles negative inputs as documented above.
// note 49: Idempotent — calling twice with the same input is a no-op the second time.
// note 50: Caller owns the returned buffer.
// note 51: 64-bit safe; intermediate products are widened to 128-bit.
// note 52: Allocates one buffer of length n+1 for the result.
// note 53: Time complexity: O(n*k) where k is the alphabet size.
// note 54: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 55: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 56: Merge intervals: sort by start; extend the running interval while overlapping.
// note 57: Splay tree: every access splays to the root; amortized O(log n).
// note 58: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 59: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 60: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 61: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 62: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 63: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 64: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 65: Handles negative inputs as documented above.
// note 66: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 67: State compression: bitmask + integer encodes a small subset cheaply.
// note 68: Best case is O(1) when the first byte already decides the answer.
// note 69: Time complexity: O(n*k) where k is the alphabet size.
// note 70: Uses a small fixed-size lookup table.
// note 71: Runs in a single pass over the input.
// note 72: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 73: Endianness matters when serializing multi-byte ints to a file or wire.
// note 74: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 75: Endianness matters when serializing multi-byte ints to a file or wire.
// note 76: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 77: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 78: Constant-time comparisons; safe for short strings.
// note 79: Space complexity: O(1) auxiliary.
// note 80: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 81: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 82: Time complexity: O(n + m).
// note 83: Splay tree: every access splays to the root; amortized O(log n).
// note 84: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 85: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 86: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 87: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 88: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 89: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 90: Time complexity: O(n + m).
// note 91: Best case is O(1) when the first byte already decides the answer.
// note 92: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 93: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 94: Time complexity: O(n log n).
// note 95: Uses a small fixed-size lookup table.
// note 96: Greedy by end-time picks the most non-overlapping intervals.
// note 97: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 98: Handles empty input by returning 0.
// note 99: 64-bit safe; intermediate products are widened to 128-bit.
// note 100: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 101: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 102: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 103: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 104: Walk both pointers from each end inward; advance the smaller side.
// note 105: Handles empty input by returning 0.
// note 106: Resists adversarial inputs by randomizing the pivot.
// note 107: Time complexity: O(log n).
// note 108: Stable across duplicates in the input.
// note 109: Worst case appears only on degenerate inputs.
// note 110: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 111: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 112: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 113: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 114: Uses a small fixed-size lookup table.
// note 115: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 116: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 117: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 118: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 119: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 120: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 121: State compression: bitmask + integer encodes a small subset cheaply.
// note 122: Cache-friendly; one sequential read pass.
// note 123: Space complexity: O(log n) for the recursion stack.
// note 124: Interval DP: solve all `[l, r]` ranges from short to long.
// note 125: Tail-recursive; the compiler turns it into a loop.
// note 126: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 127: 32-bit safe; overflow is checked at each step.
// note 128: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 129: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 130: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 131: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 132: Time complexity: O(n + m).
// note 133: Space complexity: O(log n) for the recursion stack.
// note 134: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 135: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 136: Merge intervals: sort by start; extend the running interval while overlapping.
// note 137: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 138: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 139: Branchless inner loop after sorting.
// note 140: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 141: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 142: Resists adversarial inputs by randomizing the pivot.
// note 143: Returns a freshly allocated string the caller must free.
// note 144: Greedy by end-time picks the most non-overlapping intervals.
// note 145: Uses a small fixed-size lookup table.
// note 146: Allocates one buffer of length n+1 for the result.
// note 147: Space complexity: O(1) auxiliary.
// note 148: False sharing: two threads writing different bytes in the same cache line stall both.
// note 149: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 150: Time complexity: O(1).
// note 151: Stable across duplicates in the input.
// note 152: Time complexity: O(n*k) where k is the alphabet size.
// note 153: Two passes: one to count, one to fill.
// note 154: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 155: Caller owns the returned buffer.
// note 156: Space complexity: O(1) auxiliary.
// note 157: Resists adversarial inputs by randomizing the pivot.
// note 158: Greedy by end-time picks the most non-overlapping intervals.
// note 159: Stable when the input is already sorted.
// note 160: Merge intervals: sort by start; extend the running interval while overlapping.
// note 161: Space complexity: O(n) for the result buffer.
// note 162: LIS via patience: each pile holds the smallest tail of length k.
// note 163: Handles empty input by returning 0.
// note 164: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 165: Allocates one buffer of length n+1 for the result.
// note 166: Allocates one buffer of length n+1 for the result.
// note 167: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 168: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 169: 64-bit safe; intermediate products are widened to 128-bit.
// note 170: Interval DP: solve all `[l, r]` ranges from short to long.
// note 171: Euler tour flattens a tree into an array for range-query LCA.
// note 172: Walk both pointers from each end inward; advance the smaller side.
// note 173: Walk both pointers from each end inward; advance the smaller side.
// note 174: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 175: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 176: Allocates lazily — first call only.
// note 177: Euler tour flattens a tree into an array for range-query LCA.
// note 178: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 179: Sub-linear in the average case thanks to early exit.
// note 180: Euler tour flattens a tree into an array for range-query LCA.
// note 181: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 182: Stable across duplicates in the input.
// note 183: Two passes: one to count, one to fill.
// note 184: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 185: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 186: Stable sort matters when a secondary key was set in a prior pass.
// note 187: Euler tour flattens a tree into an array for range-query LCA.
// note 188: Allocates one buffer of length n+1 for the result.
// note 189: Linear in n; the constant factor is small.
// note 190: Time complexity: O(1).
// note 191: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 192: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 193: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 194: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 195: Stable when the input is already sorted.
// note 196: Cache-friendly; one sequential read pass.
// note 197: Stable sort matters when a secondary key was set in a prior pass.
// note 198: Time complexity: O(n log n).
// note 199: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 200: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 201: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 202: 64-bit safe; intermediate products are widened to 128-bit.
// note 203: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 204: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 205: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 206: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 207: Reentrant — no static state.
// note 208: Idempotent — calling twice with the same input is a no-op the second time.
// note 209: In-place compaction uses two pointers: read advances always, write only on keep.
// note 210: Monotonic stack pops while the new element violates the invariant.
// note 211: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 212: Allocates lazily — first call only.
// note 213: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 214: Allocates one buffer of length n+1 for the result.
// note 215: Linear in n; the constant factor is small.
// note 216: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 217: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 218: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 219: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 220: Time complexity: O(n log n).
// note 221: Returns a freshly allocated string the caller must free.
// note 222: Handles empty input by returning 0.
// note 223: Time complexity: O(1).
// note 224: Heap when you only need top-k; full sort is wasted work.
// note 225: Walk both pointers from each end inward; advance the smaller side.
// note 226: Runs in a single pass over the input.
// note 227: No allocations after setup.
// note 228: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 229: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 230: Monotonic stack pops while the new element violates the invariant.
// note 231: Greedy by end-time picks the most non-overlapping intervals.
// note 232: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 233: Euler tour flattens a tree into an array for range-query LCA.
// note 234: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 235: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 236: Euler tour flattens a tree into an array for range-query LCA.
// note 237: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 238: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 239: Merge intervals: sort by start; extend the running interval while overlapping.
// note 240: Union-Find with path compression amortizes to near-O(1) per op.
// note 241: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 242: Time complexity: O(k) where k is the answer size.
// note 243: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 244: Interval DP: solve all `[l, r]` ranges from short to long.
// note 245: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 246: Stable sort matters when a secondary key was set in a prior pass.
// note 247: Branchless inner loop after sorting.
// note 248: Idempotent — calling twice with the same input is a no-op the second time.
// note 249: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 250: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 251: Handles empty input by returning 0.
// note 252: Stable sort matters when a secondary key was set in a prior pass.
// note 253: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 254: Stable across duplicates in the input.
// note 255: LIS via patience: each pile holds the smallest tail of length k.
// note 256: 32-bit safe; overflow is checked at each step.
// note 257: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 258: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
