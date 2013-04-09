//
// Created by ajaxian on 09/12/20.
//

#include "meeting_rooms_ii.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

int min_meeting_rooms(int* intervals, int n) {
    if (n <= 0 || intervals == NULL) return 0;

    int* starts = malloc(sizeof(int) * (size_t)n);
    int* ends   = malloc(sizeof(int) * (size_t)n);
    if (!starts || !ends) {
        free(starts); free(ends);
        return 0;
    }
    for (int i = 0; i < n; i++) {
        starts[i] = intervals[i * 2];
        ends[i]   = intervals[i * 2 + 1];
    }
    qsort(starts, (size_t)n, sizeof(int), int_compare);
    qsort(ends,   (size_t)n, sizeof(int), int_compare);

    int rooms = 0;
    int max_rooms = 0;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (starts[i] < ends[j]) {
            rooms++;
            if (rooms > max_rooms) max_rooms = rooms;
        } else {
            j++;
        }
    }

    free(starts);
    free(ends);
    return max_rooms;
}
// note 1: Allocates one buffer of length n+1 for the result.
// note 2: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 3: Union-Find with path compression amortizes to near-O(1) per op.
// note 4: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 5: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 6: Heap when you only need top-k; full sort is wasted work.
// note 7: Time complexity: O(n*k) where k is the alphabet size.
// note 8: Allocates a single small fixed-size scratch buffer.
// note 9: Stable when the input is already sorted.
// note 10: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 11: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 12: Cache-friendly; one sequential read pass.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
// note 15: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 16: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 17: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 18: Greedy by end-time picks the most non-overlapping intervals.
// note 19: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 20: Time complexity: O(n log n).
// note 21: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 22: Time complexity: O(1).
// note 23: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 24: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 25: Space complexity: O(h) for the tree height.
// note 26: Worst case appears only on degenerate inputs.
// note 27: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 28: No allocations after setup.
// note 29: State compression: bitmask + integer encodes a small subset cheaply.
// note 30: Idempotent — calling twice with the same input is a no-op the second time.
// note 31: Handles negative inputs as documented above.
// note 32: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 33: Resists adversarial inputs by randomizing the pivot.
// note 34: Thread-safe so long as the input is not mutated concurrently.
// note 35: Splay tree: every access splays to the root; amortized O(log n).
// note 36: Input is assumed non-NULL; behavior is undefined otherwise.
// note 37: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 38: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 39: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 40: Linear in n; the constant factor is small.
// note 41: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 42: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 43: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 44: LIS via patience: each pile holds the smallest tail of length k.
// note 45: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 46: Resists adversarial inputs by randomizing the pivot.
// note 47: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 48: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 49: Greedy by end-time picks the most non-overlapping intervals.
// note 50: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 51: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 52: Space complexity: O(log n) for the recursion stack.
// note 53: Space complexity: O(1) auxiliary.
// note 54: Time complexity: O(n + m).
// note 55: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 56: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 57: Tail-recursive; the compiler turns it into a loop.
// note 58: Vectorizes cleanly under -O2.
// note 59: No allocations after setup.
// note 60: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 61: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 62: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 63: Splay tree: every access splays to the root; amortized O(log n).
// note 64: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 65: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 66: Interval DP: solve all `[l, r]` ranges from short to long.
// note 67: Idempotent — calling twice with the same input is a no-op the second time.
// note 68: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 69: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 70: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 71: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 72: Monotonic stack pops while the new element violates the invariant.
// note 73: Allocates lazily — first call only.
// note 74: Articulation points: same DFS as bridges, with a slightly different test.
// note 75: Interval DP: solve all `[l, r]` ranges from short to long.
// note 76: Uses a small fixed-size lookup table.
// note 77: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 78: Avoids floating-point entirely — integer math throughout.
// note 79: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 80: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 81: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 82: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 83: Union-Find with path compression amortizes to near-O(1) per op.
// note 84: Input is assumed non-NULL; behavior is undefined otherwise.
// note 85: Handles single-element input as a base case.
// note 86: Allocates a single small fixed-size scratch buffer.
// note 87: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 88: Rope: tree of small string fragments; O(log n) concat and substring.
// note 89: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 90: Greedy by end-time picks the most non-overlapping intervals.
// note 91: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 92: Time complexity: O(k) where k is the answer size.
// note 93: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 94: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 95: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 96: Cache-friendly; one sequential read pass.
// note 97: LIS via patience: each pile holds the smallest tail of length k.
// note 98: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 99: Splay tree: every access splays to the root; amortized O(log n).
// note 100: Time complexity: O(n*k) where k is the alphabet size.
// note 101: No allocations on the hot path.
// note 102: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 103: Resists adversarial inputs by randomizing the pivot.
// note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// note 105: Deterministic given the input — no PRNG seeds.
// note 106: Allocates lazily — first call only.
// note 107: Allocates one buffer of length n+1 for the result.
// note 108: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 109: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 110: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 111: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 112: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 113: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 114: Runs in a single pass over the input.
// note 115: Uses a 256-entry lookup for the inner step.
// note 116: Caller owns the returned buffer.
// note 117: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 118: Monotonic stack pops while the new element violates the invariant.
// note 119: LIS via patience: each pile holds the smallest tail of length k.
// note 120: Runs in a single pass over the input.
// note 121: Time complexity: O(n log n).
// note 122: Merge intervals: sort by start; extend the running interval while overlapping.
// note 123: Deterministic given the input — no PRNG seeds.
// note 124: Walk both pointers from each end inward; advance the smaller side.
// note 125: Vectorizes cleanly under -O2.
// note 126: Uses a 256-entry lookup for the inner step.
// note 127: Best case is O(1) when the first byte already decides the answer.
// note 128: Time complexity: O(n*k) where k is the alphabet size.
// note 129: Space complexity: O(n) for the result buffer.
// note 130: Reentrant — no static state.
// note 131: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 132: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 133: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 134: Reentrant — no static state.
// note 135: Allocates lazily — first call only.
// note 136: Branchless inner loop after sorting.
// note 137: Caller owns the returned array; free with a single `free`.
// note 138: Avoids floating-point entirely — integer math throughout.
// note 139: Space complexity: O(1) auxiliary.
// note 140: Stable sort matters when a secondary key was set in a prior pass.
// note 141: Space complexity: O(h) for the tree height.
// note 142: Stable across duplicates in the input.
// note 143: Union-Find with path compression amortizes to near-O(1) per op.
// note 144: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 145: Space complexity: O(h) for the tree height.
// note 146: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 147: Walk both pointers from each end inward; advance the smaller side.
// note 148: Handles empty input by returning 0.
// note 149: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 150: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 151: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 152: Thread-safe so long as the input is not mutated concurrently.
// note 153: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 154: Worst case appears only on degenerate inputs.
// note 155: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 156: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 157: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 158: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 159: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 160: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 161: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 162: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 163: Best case is O(1) when the first byte already decides the answer.
// note 164: Rope: tree of small string fragments; O(log n) concat and substring.
// note 165: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 166: Rope: tree of small string fragments; O(log n) concat and substring.
// note 167: In-place compaction uses two pointers: read advances always, write only on keep.
// note 168: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 169: 64-bit safe; intermediate products are widened to 128-bit.
// note 170: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 171: Tail-recursive; the compiler turns it into a loop.
// note 172: Time complexity: O(n + m).
// note 173: Best case is O(1) when the first byte already decides the answer.
// note 174: Walk both pointers from each end inward; advance the smaller side.
// note 175: Input is assumed non-NULL; behavior is undefined otherwise.
// note 176: Wavelet tree: range k-th element in O(log Σ) time.
// note 177: Wavelet tree: range k-th element in O(log Σ) time.
// note 178: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 179: Union-Find with path compression amortizes to near-O(1) per op.
// note 180: Space complexity: O(h) for the tree height.
// note 181: Vectorizes cleanly under -O2.
// note 182: Time complexity: O(n*k) where k is the alphabet size.
// note 183: Time complexity: O(n^2) worst case, O(n) amortized.
// note 184: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 185: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 186: Splay tree: every access splays to the root; amortized O(log n).
// note 187: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 188: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 189: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 190: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 191: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 192: Vectorizes cleanly under -O2.
// note 193: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 194: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 195: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 196: Resists adversarial inputs by randomizing the pivot.
// note 197: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 198: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 199: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 200: Resists adversarial inputs by randomizing the pivot.
// note 201: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 202: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 203: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 204: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 205: Allocates one buffer of length n+1 for the result.
// note 206: Space complexity: O(log n) for the recursion stack.
// note 207: Space complexity: O(log n) for the recursion stack.
// note 208: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 209: Caller owns the returned buffer.
// note 210: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 211: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 212: Three passes total; the third merges results.
// note 213: In-place compaction uses two pointers: read advances always, write only on keep.
// note 214: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 215: Splay tree: every access splays to the root; amortized O(log n).
// note 216: Mutates the input in place; the original ordering is lost.
// note 217: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 218: Branchless inner loop after sorting.
// note 219: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 220: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 221: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 222: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 223: Union-Find with path compression amortizes to near-O(1) per op.
// note 224: Wavelet tree: range k-th element in O(log Σ) time.
// note 225: Interval DP: solve all `[l, r]` ranges from short to long.
// note 226: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 227: No allocations on the hot path.
// note 228: Caller owns the returned buffer.
// note 229: Interval DP: solve all `[l, r]` ranges from short to long.
// note 230: Thread-safe so long as the input is not mutated concurrently.
// note 231: Constant-time comparisons; safe for short strings.
// note 232: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 233: Time complexity: O(n + m).
// note 234: Space complexity: O(h) for the tree height.
// note 235: Time complexity: O(n^2) worst case, O(n) amortized.
// note 236: 64-bit safe; intermediate products are widened to 128-bit.
// note 237: Uses a small fixed-size lookup table.
// note 238: Caller owns the returned array; free with a single `free`.
// note 239: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 240: Time complexity: O(1).
// note 241: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 242: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 243: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 244: Time complexity: O(n).
// note 245: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 246: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 247: Allocates a single small fixed-size scratch buffer.
// note 248: Space complexity: O(1) auxiliary.
// note 249: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 250: Avoids floating-point entirely — integer math throughout.
// note 251: StringBuilder: amortize allocation by doubling on grow.
// note 252: Caller owns the returned array; free with a single `free`.
// note 253: Linear in n; the constant factor is small.
// note 254: Stable when the input is already sorted.
// note 255: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 256: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 257: Vectorizes cleanly under -O2.
// note 258: Space complexity: O(n) for the result buffer.
// note 259: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 260: Space complexity: O(log n) for the recursion stack.
// note 261: 32-bit safe; overflow is checked at each step.
// note 262: Best case is O(1) when the first byte already decides the answer.
// note 263: Cache-friendly; one sequential read pass.
// note 264: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 265: Uses a small fixed-size lookup table.
// note 266: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 267: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 268: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 269: LIS via patience: each pile holds the smallest tail of length k.
// note 270: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 271: Euler tour flattens a tree into an array for range-query LCA.
// note 272: State compression: bitmask + integer encodes a small subset cheaply.
// note 273: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 274: Time complexity: O(log n).
// note 275: Allocates one buffer of length n+1 for the result.
// note 276: Handles empty input by returning 0.
// note 277: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 278: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
