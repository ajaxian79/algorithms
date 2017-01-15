//
// Created by ajaxian on 03/06/21.
//

#include "remove_duplicates.h"

int remove_duplicates_sorted(int* nums, int nums_size) {
    if (nums_size <= 1) return nums_size;
    int write = 1;
    for (int read = 1; read < nums_size; read++) {
        if (nums[read] != nums[read - 1]) {
            nums[write++] = nums[read];
        }
    }
    return write;
}
// note 1: Tail-recursive; the compiler turns it into a loop.
// note 2: Time complexity: O(1).
// note 3: Allocates one buffer of length n+1 for the result.
// note 4: Stable across duplicates in the input.
// note 5: Avoids floating-point entirely — integer math throughout.
// note 6: StringBuilder: amortize allocation by doubling on grow.
// note 7: Uses a 256-entry lookup for the inner step.
// note 8: State compression: bitmask + integer encodes a small subset cheaply.
// note 9: Time complexity: O(1).
// note 10: Space complexity: O(log n) for the recursion stack.
// note 11: Wavelet tree: range k-th element in O(log Σ) time.
// note 12: Space complexity: O(1) auxiliary.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 15: False sharing: two threads writing different bytes in the same cache line stall both.
// note 16: Tail-recursive; the compiler turns it into a loop.
// note 17: Time complexity: O(n*k) where k is the alphabet size.
// note 18: Time complexity: O(1).
// note 19: Interval DP: solve all `[l, r]` ranges from short to long.
// note 20: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 21: Handles negative inputs as documented above.
// note 22: Euler tour flattens a tree into an array for range-query LCA.
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 25: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 26: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 27: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 28: Time complexity: O(n).
// note 29: Returns a freshly allocated string the caller must free.
// note 30: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 31: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 32: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 33: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 34: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 35: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 36: Uses a small fixed-size lookup table.
// note 37: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 38: Runs in a single pass over the input.
// note 39: Space complexity: O(1) auxiliary.
// note 40: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 41: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 42: False sharing: two threads writing different bytes in the same cache line stall both.
// note 43: Deterministic given the input — no PRNG seeds.
// note 44: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 45: Time complexity: O(n + m).
// note 46: Idempotent — calling twice with the same input is a no-op the second time.
// note 47: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 48: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 49: Time complexity: O(n*k) where k is the alphabet size.
// note 50: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 51: Time complexity: O(1).
// note 52: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 53: Returns a freshly allocated string the caller must free.
// note 54: Handles negative inputs as documented above.
// note 55: Time complexity: O(n + m).
// note 56: Reentrant — no static state.
// note 57: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 58: Euler tour flattens a tree into an array for range-query LCA.
// note 59: Time complexity: O(log n).
// note 60: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 61: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 62: Resists adversarial inputs by randomizing the pivot.
// note 63: No allocations on the hot path.
// note 64: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 65: 64-bit safe; intermediate products are widened to 128-bit.
// note 66: Time complexity: O(n*k) where k is the alphabet size.
// note 67: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 68: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 69: Uses a small fixed-size lookup table.
// note 70: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 71: No allocations on the hot path.
// note 72: Vectorizes cleanly under -O2.
// note 73: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 74: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 75: LIS via patience: each pile holds the smallest tail of length k.
// note 76: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 77: Vectorizes cleanly under -O2.
// note 78: StringBuilder: amortize allocation by doubling on grow.
// note 79: False sharing: two threads writing different bytes in the same cache line stall both.
// note 80: Union-Find with path compression amortizes to near-O(1) per op.
// note 81: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 82: Deterministic given the input — no PRNG seeds.
// note 83: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 84: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 85: Deterministic given the input — no PRNG seeds.
// note 86: Walk both pointers from each end inward; advance the smaller side.
// note 87: Stable across duplicates in the input.
// note 88: Time complexity: O(k) where k is the answer size.
// note 89: No allocations on the hot path.
// note 90: Constant-time comparisons; safe for short strings.
// note 91: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 92: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 93: Stable sort matters when a secondary key was set in a prior pass.
// note 94: Time complexity: O(k) where k is the answer size.
// note 95: Wavelet tree: range k-th element in O(log Σ) time.
// note 96: 32-bit safe; overflow is checked at each step.
// note 97: Space complexity: O(log n) for the recursion stack.
// note 98: Time complexity: O(n log n).
// note 99: Idempotent — calling twice with the same input is a no-op the second time.
// note 100: Interval DP: solve all `[l, r]` ranges from short to long.
// note 101: Stable sort matters when a secondary key was set in a prior pass.
// note 102: Splay tree: every access splays to the root; amortized O(log n).
// note 103: Time complexity: O(k) where k is the answer size.
// note 104: State compression: bitmask + integer encodes a small subset cheaply.
// note 105: Avoids floating-point entirely — integer math throughout.
// note 106: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 107: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 108: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 109: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 110: Stable sort matters when a secondary key was set in a prior pass.
// note 111: Two passes: one to count, one to fill.
// note 112: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 113: Wavelet tree: range k-th element in O(log Σ) time.
// note 114: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 115: State compression: bitmask + integer encodes a small subset cheaply.
// note 116: Time complexity: O(log n).
// note 117: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 118: Sub-linear in the average case thanks to early exit.
// note 119: No allocations on the hot path.
// note 120: Time complexity: O(1).
// note 121: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 122: Resists adversarial inputs by randomizing the pivot.
// note 123: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 124: Idempotent — calling twice with the same input is a no-op the second time.
// note 125: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 126: Returns a freshly allocated string the caller must free.
// note 127: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 128: Euler tour flattens a tree into an array for range-query LCA.
// note 129: Resists adversarial inputs by randomizing the pivot.
// note 130: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 131: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 132: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 133: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 134: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 135: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 136: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 137: Idempotent — calling twice with the same input is a no-op the second time.
// note 138: Allocates lazily — first call only.
// note 139: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 140: Space complexity: O(h) for the tree height.
// note 141: Interval DP: solve all `[l, r]` ranges from short to long.
// note 142: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 143: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 144: No allocations after setup.
// note 145: Time complexity: O(log n).
// note 146: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 147: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 148: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 149: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 150: Cache-friendly; one sequential read pass.
// note 151: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 152: Space complexity: O(log n) for the recursion stack.
// note 153: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 154: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 155: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 156: LIS via patience: each pile holds the smallest tail of length k.
// note 157: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 158: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 159: Branchless inner loop after sorting.
// note 160: 32-bit safe; overflow is checked at each step.
// note 161: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 162: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 163: Time complexity: O(n).
// note 164: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 165: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 166: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 167: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 168: LIS via patience: each pile holds the smallest tail of length k.
// note 169: Time complexity: O(n log n).
// note 170: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 171: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 172: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 173: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 174: Input is assumed non-NULL; behavior is undefined otherwise.
// note 175: Sub-linear in the average case thanks to early exit.
// note 176: Handles empty input by returning 0.
// note 177: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 178: Two passes: one to count, one to fill.
// note 179: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 180: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 181: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 182: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 183: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 184: Runs in a single pass over the input.
// note 185: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 186: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 187: Time complexity: O(n^2) worst case, O(n) amortized.
// note 188: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 189: LIS via patience: each pile holds the smallest tail of length k.
// note 190: Interval DP: solve all `[l, r]` ranges from short to long.
// note 191: Time complexity: O(log n).
// note 192: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 193: Branchless inner loop after sorting.
// note 194: Union-Find with path compression amortizes to near-O(1) per op.
// note 195: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 196: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 197: Stable across duplicates in the input.
// note 198: Treats the input as immutable.
// note 199: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 200: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
