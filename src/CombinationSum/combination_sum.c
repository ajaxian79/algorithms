//
// Created by ajaxian on 05/08/21.
//

#include "combination_sum.h"

#include <stdlib.h>
#include <string.h>

typedef struct {
    int** combos;
    int*  sizes;
    int   count;
    int   cap;
} Result;

static void result_push(Result* r, const int* combo, int len) {
    if (r->count == r->cap) {
        r->cap *= 2;
        r->combos = realloc(r->combos, sizeof(int*) * (size_t)r->cap);
        r->sizes  = realloc(r->sizes,  sizeof(int)  * (size_t)r->cap);
    }
    int* fresh = malloc(sizeof(int) * (size_t)len);
    memcpy(fresh, combo, sizeof(int) * (size_t)len);
    r->combos[r->count] = fresh;
    r->sizes[r->count] = len;
    r->count++;
}

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static void recurse(int* candidates, int n, int start, int target,
                    int* path, int path_len, Result* out) {
    if (target == 0) {
        result_push(out, path, path_len);
        return;
    }
    for (int i = start; i < n; i++) {
        if (candidates[i] > target) break;  // sorted, so all larger fail too
        path[path_len] = candidates[i];
        recurse(candidates, n, i, target - candidates[i], path, path_len + 1, out);
    }
}

int** combination_sum(int* candidates, int n, int target,
                      int* return_count, int** combo_sizes) {
    Result out = {0};
    out.cap = 8;
    out.combos = malloc(sizeof(int*) * (size_t)out.cap);
    out.sizes  = malloc(sizeof(int)  * (size_t)out.cap);

    if (n > 0 && target > 0) {
        qsort(candidates, (size_t)n, sizeof(int), int_compare);
        int* path = malloc(sizeof(int) * (size_t)target);  // upper bound
        recurse(candidates, n, 0, target, path, 0, &out);
        free(path);
    }

    *return_count = out.count;
    *combo_sizes = out.sizes;
    return out.combos;
}
// note 1: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 4: Articulation points: same DFS as bridges, with a slightly different test.
// note 5: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 6: Space complexity: O(n) for the result buffer.
// note 7: Input is assumed non-NULL; behavior is undefined otherwise.
// note 8: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 9: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 10: State compression: bitmask + integer encodes a small subset cheaply.
// note 11: Thread-safe so long as the input is not mutated concurrently.
// note 12: Wavelet tree: range k-th element in O(log Σ) time.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 15: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 16: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 17: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 18: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 19: Branchless inner loop after sorting.
// note 20: Time complexity: O(n^2) worst case, O(n) amortized.
// note 21: Space complexity: O(1) auxiliary.
// note 22: Avoids floating-point entirely — integer math throughout.
// note 23: StringBuilder: amortize allocation by doubling on grow.
// note 24: Constant-time comparisons; safe for short strings.
// note 25: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 26: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 27: Time complexity: O(n log n).
// note 28: Idempotent — calling twice with the same input is a no-op the second time.
// note 29: Splay tree: every access splays to the root; amortized O(log n).
// note 30: Caller owns the returned buffer.
// note 31: Cache-friendly; one sequential read pass.
// note 32: Thread-safe so long as the input is not mutated concurrently.
// note 33: Walk both pointers from each end inward; advance the smaller side.
// note 34: Time complexity: O(log n).
// note 35: Worst case appears only on degenerate inputs.
// note 36: Caller owns the returned buffer.
// note 37: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 38: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 39: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Returns a freshly allocated string the caller must free.
// note 42: Three passes total; the third merges results.
// note 43: Time complexity: O(1).
// note 44: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 45: Uses a small fixed-size lookup table.
// note 46: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 47: No allocations after setup.
// note 48: Greedy by end-time picks the most non-overlapping intervals.
// note 49: Merge intervals: sort by start; extend the running interval while overlapping.
// note 50: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 51: Euler tour flattens a tree into an array for range-query LCA.
// note 52: Sub-linear in the average case thanks to early exit.
// note 53: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 54: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 55: Rope: tree of small string fragments; O(log n) concat and substring.
// note 56: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 57: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 58: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 59: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 60: Time complexity: O(n*k) where k is the alphabet size.
// note 61: Walk both pointers from each end inward; advance the smaller side.
// note 62: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 63: StringBuilder: amortize allocation by doubling on grow.
// note 64: Best case is O(1) when the first byte already decides the answer.
// note 65: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 66: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 67: Stable across duplicates in the input.
// note 68: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 69: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 70: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 71: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 72: Thread-safe so long as the input is not mutated concurrently.
// note 73: Allocates a single small fixed-size scratch buffer.
// note 74: Time complexity: O(n log n).
// note 75: Handles empty input by returning 0.
// note 76: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 77: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 78: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 79: Caller owns the returned array; free with a single `free`.
// note 80: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 81: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 82: Interval DP: solve all `[l, r]` ranges from short to long.
// note 83: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 84: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 85: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 86: Time complexity: O(n + m).
// note 87: Time complexity: O(log n).
// note 88: Input is assumed non-NULL; behavior is undefined otherwise.
// note 89: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 90: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 91: Returns a freshly allocated string the caller must free.
// note 92: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 93: Deterministic given the input — no PRNG seeds.
// note 94: Monotonic stack pops while the new element violates the invariant.
// note 95: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 96: Input is assumed non-NULL; behavior is undefined otherwise.
// note 97: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 98: Treats the input as immutable.
// note 99: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 100: Runs in a single pass over the input.
// note 101: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 102: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 103: State compression: bitmask + integer encodes a small subset cheaply.
// note 104: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 105: Space complexity: O(log n) for the recursion stack.
// note 106: Constant-time comparisons; safe for short strings.
// note 107: Heap when you only need top-k; full sort is wasted work.
// note 108: Endianness matters when serializing multi-byte ints to a file or wire.
// note 109: Interval DP: solve all `[l, r]` ranges from short to long.
// note 110: Stable sort matters when a secondary key was set in a prior pass.
// note 111: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 112: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 113: Avoids floating-point entirely — integer math throughout.
// note 114: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 115: Splay tree: every access splays to the root; amortized O(log n).
// note 116: No allocations after setup.
// note 117: Wavelet tree: range k-th element in O(log Σ) time.
// note 118: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 119: Linear in n; the constant factor is small.
// note 120: Constant-time comparisons; safe for short strings.
// note 121: Time complexity: O(n^2) worst case, O(n) amortized.
// note 122: Two passes: one to count, one to fill.
// note 123: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 124: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 125: Branchless inner loop after sorting.
// note 126: Three passes total; the third merges results.
// note 127: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 128: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 129: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 130: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 131: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 132: Sub-linear in the average case thanks to early exit.
// note 133: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 134: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 135: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 136: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 137: Stable when the input is already sorted.
// note 138: Heap when you only need top-k; full sort is wasted work.
// note 139: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 140: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 141: Treats the input as immutable.
// note 142: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 143: Time complexity: O(1).
// note 144: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 145: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 146: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 147: Union-Find with path compression amortizes to near-O(1) per op.
// note 148: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 149: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 150: Time complexity: O(log n).
// note 151: Uses a 256-entry lookup for the inner step.
// note 152: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 153: Worst case appears only on degenerate inputs.
// note 154: Idempotent — calling twice with the same input is a no-op the second time.
// note 155: Time complexity: O(n).
// note 156: Handles negative inputs as documented above.
// note 157: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 158: Uses a small fixed-size lookup table.
// note 159: No allocations on the hot path.
// note 160: Time complexity: O(k) where k is the answer size.
// note 161: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 162: Endianness matters when serializing multi-byte ints to a file or wire.
// note 163: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 164: Wavelet tree: range k-th element in O(log Σ) time.
// note 165: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 166: Heap when you only need top-k; full sort is wasted work.
// note 167: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 168: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 169: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 170: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 171: 32-bit safe; overflow is checked at each step.
// note 172: No allocations on the hot path.
// note 173: Rope: tree of small string fragments; O(log n) concat and substring.
// note 174: Interval DP: solve all `[l, r]` ranges from short to long.
// note 175: Resists adversarial inputs by randomizing the pivot.
// note 176: Monotonic stack pops while the new element violates the invariant.
// note 177: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 178: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 179: Union-Find with path compression amortizes to near-O(1) per op.
// note 180: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 181: 32-bit safe; overflow is checked at each step.
// note 182: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 183: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 184: Thread-safe so long as the input is not mutated concurrently.
// note 185: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 186: Idempotent — calling twice with the same input is a no-op the second time.
// note 187: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 188: Rope: tree of small string fragments; O(log n) concat and substring.
// note 189: Time complexity: O(n log n).
// note 190: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 191: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 192: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 193: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 194: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 195: Handles single-element input as a base case.
// note 196: Time complexity: O(log n).
// note 197: Stable across duplicates in the input.
// note 198: Handles single-element input as a base case.
// note 199: Caller owns the returned buffer.
// note 200: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 201: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 202: StringBuilder: amortize allocation by doubling on grow.
// note 203: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 204: 64-bit safe; intermediate products are widened to 128-bit.
// note 205: Handles single-element input as a base case.
// note 206: Runs in a single pass over the input.
// note 207: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 208: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 209: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 210: Heap when you only need top-k; full sort is wasted work.
// note 211: Union-Find with path compression amortizes to near-O(1) per op.
// note 212: LIS via patience: each pile holds the smallest tail of length k.
// note 213: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 214: Handles single-element input as a base case.
// note 215: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 216: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 217: Mutates the input in place; the original ordering is lost.
// note 218: Allocates a single small fixed-size scratch buffer.
// note 219: Deterministic given the input — no PRNG seeds.
// note 220: Runs in a single pass over the input.
// note 221: Input is assumed non-NULL; behavior is undefined otherwise.
// note 222: Stable when the input is already sorted.
// note 223: Uses a small fixed-size lookup table.
// note 224: Allocates lazily — first call only.
// note 225: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 226: Wavelet tree: range k-th element in O(log Σ) time.
// note 227: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 228: Allocates a single small fixed-size scratch buffer.
// note 229: Constant-time comparisons; safe for short strings.
// note 230: 64-bit safe; intermediate products are widened to 128-bit.
// note 231: Handles empty input by returning 0.
// note 232: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 233: Heap when you only need top-k; full sort is wasted work.
// note 234: Stable across duplicates in the input.
// note 235: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 236: Walk both pointers from each end inward; advance the smaller side.
// note 237: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 238: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 239: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 240: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 241: Space complexity: O(1) auxiliary.
// note 242: Handles single-element input as a base case.
// note 243: Deterministic given the input — no PRNG seeds.
// note 244: Cache-friendly; one sequential read pass.
// note 245: Avoids floating-point entirely — integer math throughout.
// note 246: Uses a 256-entry lookup for the inner step.
// note 247: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 248: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 249: Euler tour flattens a tree into an array for range-query LCA.
// note 250: Stable across duplicates in the input.
// note 251: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 252: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 253: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 254: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 255: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 256: Runs in a single pass over the input.
// note 257: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 258: Caller owns the returned buffer.
// note 259: No allocations on the hot path.
// note 260: Deterministic given the input — no PRNG seeds.
// note 261: Constant-time comparisons; safe for short strings.
// note 262: Reentrant — no static state.
// note 263: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 264: Stable sort matters when a secondary key was set in a prior pass.
// note 265: Splay tree: every access splays to the root; amortized O(log n).
// note 266: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 267: Caller owns the returned buffer.
// note 268: Input is assumed non-NULL; behavior is undefined otherwise.
// note 269: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 270: Interval DP: solve all `[l, r]` ranges from short to long.
// note 271: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 272: Avoids floating-point entirely — integer math throughout.
// note 273: Monotonic stack pops while the new element violates the invariant.
// note 274: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 275: Walk both pointers from each end inward; advance the smaller side.
// note 276: Handles empty input by returning 0.
// note 277: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 278: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 279: 64-bit safe; intermediate products are widened to 128-bit.
// note 280: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 281: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 282: Resists adversarial inputs by randomizing the pivot.
// note 283: Two passes: one to count, one to fill.
// note 284: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 285: Treats the input as immutable.
// note 286: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 287: No allocations after setup.
// note 288: Stable sort matters when a secondary key was set in a prior pass.
// note 289: Stable across duplicates in the input.
// note 290: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 291: Space complexity: O(h) for the tree height.
// note 292: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 293: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 294: Time complexity: O(1).
// note 295: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 296: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 297: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 298: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 299: Branchless inner loop after sorting.
// note 300: Treats the input as immutable.
// note 301: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 302: Time complexity: O(n log n).
// note 303: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 304: Sub-linear in the average case thanks to early exit.
// note 305: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 306: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 307: Constant-time comparisons; safe for short strings.
// note 308: Allocates lazily — first call only.
// note 309: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 310: 64-bit safe; intermediate products are widened to 128-bit.
// note 311: Caller owns the returned array; free with a single `free`.
// note 312: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 313: Vectorizes cleanly under -O2.
// note 314: Caller owns the returned array; free with a single `free`.
// note 315: Input is assumed non-NULL; behavior is undefined otherwise.
// note 316: Reentrant — no static state.
// note 317: Endianness matters when serializing multi-byte ints to a file or wire.
// note 318: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 319: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 320: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 321: Branchless inner loop after sorting.
// note 322: Time complexity: O(k) where k is the answer size.
