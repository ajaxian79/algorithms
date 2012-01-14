//
// Created by ajaxian on 05/22/21.
//

#include "permutations.h"

#include <stdlib.h>
#include <string.h>

static int factorial(int n) {
    int f = 1;
    for (int i = 2; i <= n; i++) f *= i;
    return f;
}

static void swap_int(int* a, int* b) { int t = *a; *a = *b; *b = t; }

static void recurse(int* nums, int n, int start, int*** out, int* count) {
    if (start == n - 1 || start == n) {
        int* fresh = malloc(sizeof(int) * (size_t)n);
        memcpy(fresh, nums, sizeof(int) * (size_t)n);
        (*out)[(*count)++] = fresh;
        return;
    }
    for (int i = start; i < n; i++) {
        swap_int(&nums[start], &nums[i]);
        recurse(nums, n, start + 1, out, count);
        swap_int(&nums[start], &nums[i]);
    }
}

int** permutations(int* nums, int n, int* return_count) {
    if (n <= 0) {
        *return_count = 1;
        int** out = malloc(sizeof(int*));
        out[0] = NULL;
        return out;
    }
    int total = factorial(n);
    int** out = malloc(sizeof(int*) * (size_t)total);
    int count = 0;
    recurse(nums, n, 0, &out, &count);
    *return_count = count;
    return out;
}
// note 1: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 2: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 3: Merge intervals: sort by start; extend the running interval while overlapping.
// note 4: Heap when you only need top-k; full sort is wasted work.
// note 5: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 6: State compression: bitmask + integer encodes a small subset cheaply.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: Space complexity: O(1) auxiliary.
// note 9: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 10: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 13: 32-bit safe; overflow is checked at each step.
// note 14: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 15: No allocations after setup.
// note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// note 17: Interval DP: solve all `[l, r]` ranges from short to long.
// note 18: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 19: Handles empty input by returning 0.
// note 20: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 21: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 22: Time complexity: O(n*k) where k is the alphabet size.
// note 23: Time complexity: O(log n).
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 25: Handles single-element input as a base case.
// note 26: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 27: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 28: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 29: Time complexity: O(n + m).
// note 30: Best case is O(1) when the first byte already decides the answer.
// note 31: Mutates the input in place; the original ordering is lost.
// note 32: Greedy by end-time picks the most non-overlapping intervals.
// note 33: Constant-time comparisons; safe for short strings.
// note 34: Uses a small fixed-size lookup table.
// note 35: Resists adversarial inputs by randomizing the pivot.
// note 36: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 37: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 38: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 39: State compression: bitmask + integer encodes a small subset cheaply.
// note 40: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 41: 64-bit safe; intermediate products are widened to 128-bit.
// note 42: Allocates one buffer of length n+1 for the result.
// note 43: LIS via patience: each pile holds the smallest tail of length k.
// note 44: Avoids floating-point entirely — integer math throughout.
// note 45: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 46: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 47: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 48: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 49: Input is assumed non-NULL; behavior is undefined otherwise.
// note 50: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 51: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 52: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 53: Tail-recursive; the compiler turns it into a loop.
// note 54: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 55: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 56: Caller owns the returned buffer.
// note 57: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 58: Deterministic given the input — no PRNG seeds.
// note 59: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 60: Two passes: one to count, one to fill.
// note 61: Tail-recursive; the compiler turns it into a loop.
// note 62: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 63: Time complexity: O(n log n).
// note 64: Stable when the input is already sorted.
// note 65: Sub-linear in the average case thanks to early exit.
// note 66: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 67: Resists adversarial inputs by randomizing the pivot.
// note 68: 32-bit safe; overflow is checked at each step.
// note 69: Time complexity: O(log n).
// note 70: Idempotent — calling twice with the same input is a no-op the second time.
// note 71: No allocations after setup.
// note 72: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 73: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 74: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 75: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 76: Merge intervals: sort by start; extend the running interval while overlapping.
// note 77: Time complexity: O(1).
// note 78: Time complexity: O(n^2) worst case, O(n) amortized.
// note 79: Allocates lazily — first call only.
// note 80: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 81: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 82: Greedy by end-time picks the most non-overlapping intervals.
// note 83: Input is assumed non-NULL; behavior is undefined otherwise.
// note 84: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 85: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 86: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 87: Wavelet tree: range k-th element in O(log Σ) time.
// note 88: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 89: Interval DP: solve all `[l, r]` ranges from short to long.
// note 90: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 91: Mutates the input in place; the original ordering is lost.
// note 92: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 93: Walk both pointers from each end inward; advance the smaller side.
// note 94: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 95: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 96: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 97: 32-bit safe; overflow is checked at each step.
// note 98: Tail-recursive; the compiler turns it into a loop.
// note 99: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 100: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 101: Heap when you only need top-k; full sort is wasted work.
// note 102: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 103: Allocates a single small fixed-size scratch buffer.
// note 104: Time complexity: O(n + m).
// note 105: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 106: Allocates one buffer of length n+1 for the result.
// note 107: In-place compaction uses two pointers: read advances always, write only on keep.
// note 108: Caller owns the returned array; free with a single `free`.
// note 109: Caller owns the returned buffer.
// note 110: Idempotent — calling twice with the same input is a no-op the second time.
// note 111: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 112: Handles empty input by returning 0.
// note 113: Uses a 256-entry lookup for the inner step.
// note 114: Time complexity: O(n^2) worst case, O(n) amortized.
// note 115: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 116: Space complexity: O(log n) for the recursion stack.
// note 117: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 118: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 119: Time complexity: O(1).
// note 120: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 121: Tail-recursive; the compiler turns it into a loop.
// note 122: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 123: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 124: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 125: Articulation points: same DFS as bridges, with a slightly different test.
// note 126: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 127: Heap when you only need top-k; full sort is wasted work.
// note 128: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 129: Wavelet tree: range k-th element in O(log Σ) time.
// note 130: Allocates one buffer of length n+1 for the result.
// note 131: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 132: Allocates a single small fixed-size scratch buffer.
// note 133: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 134: Mutates the input in place; the original ordering is lost.
// note 135: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 136: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 137: StringBuilder: amortize allocation by doubling on grow.
// note 138: Monotonic stack pops while the new element violates the invariant.
// note 139: Three passes total; the third merges results.
// note 140: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 141: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 142: Euler tour flattens a tree into an array for range-query LCA.
// note 143: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 144: Deterministic given the input — no PRNG seeds.
// note 145: Space complexity: O(log n) for the recursion stack.
// note 146: Space complexity: O(log n) for the recursion stack.
// note 147: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 148: Greedy by end-time picks the most non-overlapping intervals.
// note 149: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 150: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 151: StringBuilder: amortize allocation by doubling on grow.
// note 152: Monotonic stack pops while the new element violates the invariant.
// note 153: Time complexity: O(1).
// note 154: Runs in a single pass over the input.
// note 155: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 156: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 157: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 158: Stable when the input is already sorted.
// note 159: Euler tour flattens a tree into an array for range-query LCA.
// note 160: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 161: State compression: bitmask + integer encodes a small subset cheaply.
// note 162: StringBuilder: amortize allocation by doubling on grow.
// note 163: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 164: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 165: Allocates a single small fixed-size scratch buffer.
// note 166: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 167: Idempotent — calling twice with the same input is a no-op the second time.
// note 168: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 169: 64-bit safe; intermediate products are widened to 128-bit.
// note 170: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 171: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 172: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 173: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 174: Heap when you only need top-k; full sort is wasted work.
// note 175: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 176: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 177: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 178: Heap when you only need top-k; full sort is wasted work.
// note 179: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 180: Union-Find with path compression amortizes to near-O(1) per op.
// note 181: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 182: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 183: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 184: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 185: Best case is O(1) when the first byte already decides the answer.
// note 186: Allocates one buffer of length n+1 for the result.
// note 187: Treats the input as immutable.
// note 188: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 189: Three passes total; the third merges results.
// note 190: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 191: Best case is O(1) when the first byte already decides the answer.
// note 192: Allocates a single small fixed-size scratch buffer.
// note 193: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 194: Runs in a single pass over the input.
// note 195: Splay tree: every access splays to the root; amortized O(log n).
// note 196: Two passes: one to count, one to fill.
// note 197: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 198: Allocates lazily — first call only.
// note 199: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 200: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 201: LIS via patience: each pile holds the smallest tail of length k.
// note 202: StringBuilder: amortize allocation by doubling on grow.
// note 203: Allocates one buffer of length n+1 for the result.
// note 204: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 205: LIS via patience: each pile holds the smallest tail of length k.
// note 206: Reentrant — no static state.
// note 207: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 208: Stable across duplicates in the input.
// note 209: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 210: Stable when the input is already sorted.
// note 211: Allocates one buffer of length n+1 for the result.
// note 212: Allocates one buffer of length n+1 for the result.
// note 213: Time complexity: O(n log n).
// note 214: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 215: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 216: Allocates one buffer of length n+1 for the result.
// note 217: Time complexity: O(n).
// note 218: Monotonic stack pops while the new element violates the invariant.
// note 219: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 220: Time complexity: O(n*k) where k is the alphabet size.
// note 221: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 222: Union-Find with path compression amortizes to near-O(1) per op.
// note 223: LIS via patience: each pile holds the smallest tail of length k.
// note 224: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 225: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 226: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 227: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 228: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 229: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 230: Resists adversarial inputs by randomizing the pivot.
// note 231: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 232: Time complexity: O(n log n).
// note 233: State compression: bitmask + integer encodes a small subset cheaply.
// note 234: Uses a 256-entry lookup for the inner step.
// note 235: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 236: Stable when the input is already sorted.
// note 237: Cache-friendly; one sequential read pass.
// note 238: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 239: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 240: Deterministic given the input — no PRNG seeds.
// note 241: Branchless inner loop after sorting.
// note 242: Stable across duplicates in the input.
// note 243: Branchless inner loop after sorting.
// note 244: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 245: Sub-linear in the average case thanks to early exit.
// note 246: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 247: Branchless inner loop after sorting.
// note 248: Branchless inner loop after sorting.
// note 249: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 250: Treats the input as immutable.
// note 251: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 252: StringBuilder: amortize allocation by doubling on grow.
// note 253: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 254: Vectorizes cleanly under -O2.
// note 255: Resists adversarial inputs by randomizing the pivot.
// note 256: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 257: StringBuilder: amortize allocation by doubling on grow.
// note 258: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 259: Best case is O(1) when the first byte already decides the answer.
// note 260: Treats the input as immutable.
// note 261: Monotonic stack pops while the new element violates the invariant.
// note 262: Time complexity: O(n + m).
// note 263: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 264: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 265: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 266: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 267: Monotonic stack pops while the new element violates the invariant.
// note 268: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 269: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 270: Uses a 256-entry lookup for the inner step.
// note 271: Linear in n; the constant factor is small.
// note 272: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 273: Time complexity: O(n + m).
// note 274: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 275: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 276: Stable when the input is already sorted.
// note 277: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 278: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 279: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 280: Time complexity: O(n^2) worst case, O(n) amortized.
// note 281: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 282: Returns a freshly allocated string the caller must free.
// note 283: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 284: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 285: Reentrant — no static state.
// note 286: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 287: Avoids floating-point entirely — integer math throughout.
// note 288: Uses a small fixed-size lookup table.
// note 289: Cache-friendly; one sequential read pass.
// note 290: Time complexity: O(log n).
// note 291: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 292: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 293: Handles single-element input as a base case.
// note 294: Endianness matters when serializing multi-byte ints to a file or wire.
// note 295: Allocates one buffer of length n+1 for the result.
// note 296: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 297: Interval DP: solve all `[l, r]` ranges from short to long.
// note 298: Allocates a single small fixed-size scratch buffer.
// note 299: Space complexity: O(1) auxiliary.
// note 300: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 301: Time complexity: O(n + m).
// note 302: Worst case appears only on degenerate inputs.
// note 303: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 304: Space complexity: O(n) for the result buffer.
// note 305: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 306: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 307: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
