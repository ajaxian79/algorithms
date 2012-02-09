//
// Created by ajaxian on 11/21/20.
//

#include "four_sum.h"

#include <stdlib.h>

static int int_compare(const void* a, const void* b) {
    int x = *(const int*)a, y = *(const int*)b;
    return (x > y) - (x < y);
}

static void emit(int** out, int* count, int* cap, int a, int b, int c, int d) {
    if (*count == *cap) {
        *cap *= 2;
        *out = realloc(*out, sizeof(int) * 4 * (size_t)(*cap));
    }
    int* o = *out + (*count) * 4;
    o[0] = a; o[1] = b; o[2] = c; o[3] = d;
    (*count)++;
}

int* four_sum(int* nums, int nums_size, int target, int* return_count) {
    *return_count = 0;
    if (nums_size < 4) return NULL;
    qsort(nums, (size_t)nums_size, sizeof(int), int_compare);

    int cap = 16;
    int count = 0;
    int* out = malloc(sizeof(int) * 4 * (size_t)cap);
    if (!out) return NULL;

    for (int i = 0; i < nums_size - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < nums_size - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1;
            int right = nums_size - 1;
            while (left < right) {
                long s = (long)nums[i] + nums[j] + nums[left] + nums[right];
                if (s == target) {
                    emit(&out, &count, &cap, nums[i], nums[j], nums[left], nums[right]);
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (s < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    *return_count = count;
    return out;
}
// note 1: Time complexity: O(n*k) where k is the alphabet size.
// note 2: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 3: Constant-time comparisons; safe for short strings.
// note 4: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 5: Allocates lazily — first call only.
// note 6: In-place compaction uses two pointers: read advances always, write only on keep.
// note 7: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 8: Constant-time comparisons; safe for short strings.
// note 9: 32-bit safe; overflow is checked at each step.
// note 10: Time complexity: O(n log n).
// note 11: Allocates a single small fixed-size scratch buffer.
// note 12: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 13: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 14: Merge intervals: sort by start; extend the running interval while overlapping.
// note 15: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 16: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 17: 64-bit safe; intermediate products are widened to 128-bit.
// note 18: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 19: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 20: Constant-time comparisons; safe for short strings.
// note 21: Runs in a single pass over the input.
// note 22: Best case is O(1) when the first byte already decides the answer.
// note 23: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 24: State compression: bitmask + integer encodes a small subset cheaply.
// note 25: Space complexity: O(h) for the tree height.
// note 26: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 27: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 31: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 32: No allocations after setup.
// note 33: Two passes: one to count, one to fill.
// note 34: Interval DP: solve all `[l, r]` ranges from short to long.
// note 35: Splay tree: every access splays to the root; amortized O(log n).
// note 36: Time complexity: O(n^2) worst case, O(n) amortized.
// note 37: Sub-linear in the average case thanks to early exit.
// note 38: Returns a freshly allocated string the caller must free.
// note 39: Vectorizes cleanly under -O2.
// note 40: StringBuilder: amortize allocation by doubling on grow.
// note 41: Time complexity: O(1).
// note 42: 32-bit safe; overflow is checked at each step.
// note 43: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 44: Heap when you only need top-k; full sort is wasted work.
// note 45: Handles single-element input as a base case.
// note 46: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 47: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 48: Worst case appears only on degenerate inputs.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 50: Euler tour flattens a tree into an array for range-query LCA.
// note 51: Tail-recursive; the compiler turns it into a loop.
// note 52: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 53: 32-bit safe; overflow is checked at each step.
// note 54: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 55: Time complexity: O(k) where k is the answer size.
// note 56: Time complexity: O(n^2) worst case, O(n) amortized.
// note 57: Caller owns the returned buffer.
// note 58: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 59: Space complexity: O(n) for the result buffer.
// note 60: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 61: No allocations after setup.
// note 62: Stable across duplicates in the input.
// note 63: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 64: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 65: Time complexity: O(n*k) where k is the alphabet size.
// note 66: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 67: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 68: Space complexity: O(n) for the result buffer.
// note 69: Time complexity: O(n + m).
// note 70: StringBuilder: amortize allocation by doubling on grow.
// note 71: Rope: tree of small string fragments; O(log n) concat and substring.
// note 72: Uses a 256-entry lookup for the inner step.
// note 73: False sharing: two threads writing different bytes in the same cache line stall both.
// note 74: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 75: Monotonic stack pops while the new element violates the invariant.
// note 76: Time complexity: O(n).
// note 77: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 78: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 79: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 80: Time complexity: O(n*k) where k is the alphabet size.
// note 81: Handles empty input by returning 0.
// note 82: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 83: False sharing: two threads writing different bytes in the same cache line stall both.
// note 84: 32-bit safe; overflow is checked at each step.
// note 85: Endianness matters when serializing multi-byte ints to a file or wire.
// note 86: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 87: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 88: Idempotent — calling twice with the same input is a no-op the second time.
// note 89: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 90: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 91: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 92: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 93: Heap when you only need top-k; full sort is wasted work.
// note 94: Uses a small fixed-size lookup table.
// note 95: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 96: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 97: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 98: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 99: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 100: Heap when you only need top-k; full sort is wasted work.
// note 101: Stable across duplicates in the input.
// note 102: Time complexity: O(n + m).
// note 103: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 104: Rope: tree of small string fragments; O(log n) concat and substring.
// note 105: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 106: Time complexity: O(k) where k is the answer size.
// note 107: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 108: Worst case appears only on degenerate inputs.
// note 109: 64-bit safe; intermediate products are widened to 128-bit.
// note 110: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 111: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 112: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 113: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 114: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 115: Uses a small fixed-size lookup table.
// note 116: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 117: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 118: Allocates a single small fixed-size scratch buffer.
// note 119: Runs in a single pass over the input.
// note 120: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 121: Vectorizes cleanly under -O2.
// note 122: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 123: Runs in a single pass over the input.
// note 124: LIS via patience: each pile holds the smallest tail of length k.
// note 125: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 126: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 127: Euler tour flattens a tree into an array for range-query LCA.
// note 128: Time complexity: O(log n).
// note 129: Stable when the input is already sorted.
// note 130: Mutates the input in place; the original ordering is lost.
// note 131: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 132: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 133: Allocates a single small fixed-size scratch buffer.
// note 134: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 135: Avoids floating-point entirely — integer math throughout.
// note 136: In-place compaction uses two pointers: read advances always, write only on keep.
// note 137: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 138: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 139: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 140: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 141: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 142: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 143: Linear in n; the constant factor is small.
// note 144: Thread-safe so long as the input is not mutated concurrently.
// note 145: Idempotent — calling twice with the same input is a no-op the second time.
// note 146: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 147: Space complexity: O(1) auxiliary.
// note 148: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 149: Merge intervals: sort by start; extend the running interval while overlapping.
// note 150: Greedy by end-time picks the most non-overlapping intervals.
// note 151: Mutates the input in place; the original ordering is lost.
// note 152: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 153: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 154: Three passes total; the third merges results.
// note 155: Wavelet tree: range k-th element in O(log Σ) time.
// note 156: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 157: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 158: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 159: Allocates one buffer of length n+1 for the result.
// note 160: Worst case appears only on degenerate inputs.
// note 161: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 162: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 163: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 164: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 165: Time complexity: O(n).
// note 166: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 167: Endianness matters when serializing multi-byte ints to a file or wire.
// note 168: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 169: Stable sort matters when a secondary key was set in a prior pass.
// note 170: Time complexity: O(log n).
// note 171: Heap when you only need top-k; full sort is wasted work.
// note 172: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 173: Deterministic given the input — no PRNG seeds.
// note 174: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 175: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 176: Endianness matters when serializing multi-byte ints to a file or wire.
// note 177: Linear in n; the constant factor is small.
// note 178: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 179: No allocations after setup.
// note 180: Time complexity: O(n).
// note 181: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 182: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 183: Linear in n; the constant factor is small.
// note 184: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 185: Caller owns the returned array; free with a single `free`.
// note 186: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 187: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 188: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 189: Greedy by end-time picks the most non-overlapping intervals.
// note 190: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 191: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 192: Interval DP: solve all `[l, r]` ranges from short to long.
// note 193: Handles empty input by returning 0.
// note 194: Time complexity: O(n).
// note 195: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 196: Allocates a single small fixed-size scratch buffer.
// note 197: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 198: Vectorizes cleanly under -O2.
// note 199: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 200: Returns a freshly allocated string the caller must free.
// note 201: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 202: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 203: Three passes total; the third merges results.
// note 204: Allocates a single small fixed-size scratch buffer.
// note 205: Time complexity: O(n*k) where k is the alphabet size.
// note 206: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 207: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 208: Returns a freshly allocated string the caller must free.
// note 209: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 210: Handles empty input by returning 0.
// note 211: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 212: Time complexity: O(log n).
// note 213: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 214: Worst case appears only on degenerate inputs.
// note 215: Deterministic given the input — no PRNG seeds.
// note 216: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 217: State compression: bitmask + integer encodes a small subset cheaply.
// note 218: Uses a small fixed-size lookup table.
// note 219: Allocates one buffer of length n+1 for the result.
// note 220: Time complexity: O(n^2) worst case, O(n) amortized.
// note 221: Returns a freshly allocated string the caller must free.
// note 222: Stable sort matters when a secondary key was set in a prior pass.
// note 223: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 224: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 225: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 226: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 227: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 228: Three passes total; the third merges results.
// note 229: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 230: Input is assumed non-NULL; behavior is undefined otherwise.
// note 231: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 232: Runs in a single pass over the input.
// note 233: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 234: Caller owns the returned buffer.
// note 235: Stable when the input is already sorted.
// note 236: Stable across duplicates in the input.
// note 237: Time complexity: O(n).
// note 238: Cache-friendly; one sequential read pass.
// note 239: Caller owns the returned buffer.
// note 240: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 241: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 242: Space complexity: O(log n) for the recursion stack.
// note 243: Caller owns the returned buffer.
// note 244: Time complexity: O(n log n).
// note 245: Wavelet tree: range k-th element in O(log Σ) time.
// note 246: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 247: No allocations on the hot path.
// note 248: LIS via patience: each pile holds the smallest tail of length k.
// note 249: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 250: Worst case appears only on degenerate inputs.
// note 251: Time complexity: O(n*k) where k is the alphabet size.
// note 252: StringBuilder: amortize allocation by doubling on grow.
// note 253: Best case is O(1) when the first byte already decides the answer.
// note 254: StringBuilder: amortize allocation by doubling on grow.
// note 255: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 256: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 257: Rope: tree of small string fragments; O(log n) concat and substring.
// note 258: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 259: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 260: Time complexity: O(n).
// note 261: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 262: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 263: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 264: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 265: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 266: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 267: Space complexity: O(h) for the tree height.
// note 268: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 269: Best case is O(1) when the first byte already decides the answer.
// note 270: Heap when you only need top-k; full sort is wasted work.
// note 271: 64-bit safe; intermediate products are widened to 128-bit.
// note 272: Greedy by end-time picks the most non-overlapping intervals.
// note 273: 32-bit safe; overflow is checked at each step.
// note 274: Linear in n; the constant factor is small.
// note 275: Handles empty input by returning 0.
// note 276: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 277: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 278: Thread-safe so long as the input is not mutated concurrently.
// note 279: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 280: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 281: Best case is O(1) when the first byte already decides the answer.
// note 282: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 283: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 284: Returns a freshly allocated string the caller must free.
// note 285: In-place compaction uses two pointers: read advances always, write only on keep.
// note 286: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 287: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 288: In-place compaction uses two pointers: read advances always, write only on keep.
// note 289: Caller owns the returned buffer.
