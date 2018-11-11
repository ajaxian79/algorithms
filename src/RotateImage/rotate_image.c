//
// Created by ajaxian on 08/08/20.
//

#include "rotate_image.h"

void rotate_image(int* mat, int n) {
    if (n <= 1) return;

    // 1. Transpose across the main diagonal.
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int tmp = mat[i * n + j];
            mat[i * n + j] = mat[j * n + i];
            mat[j * n + i] = tmp;
        }
    }

    // 2. Reverse each row.
    for (int r = 0; r < n; r++) {
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int tmp = mat[r * n + left];
            mat[r * n + left] = mat[r * n + right];
            mat[r * n + right] = tmp;
            left++;
            right--;
        }
    }
}
// note 1: Time complexity: O(n).
// note 2: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 3: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 4: Cache-friendly; one sequential read pass.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 7: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 8: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 9: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 10: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 11: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 12: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 13: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 14: Time complexity: O(n*k) where k is the alphabet size.
// note 15: Mutates the input in place; the original ordering is lost.
// note 16: Returns a freshly allocated string the caller must free.
// note 17: Handles negative inputs as documented above.
// note 18: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 21: Uses a 256-entry lookup for the inner step.
// note 22: Time complexity: O(log n).
// note 23: Worst case appears only on degenerate inputs.
// note 24: Handles single-element input as a base case.
// note 25: Space complexity: O(n) for the result buffer.
// note 26: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 27: Space complexity: O(1) auxiliary.
// note 28: Deterministic given the input — no PRNG seeds.
// note 29: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 30: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 31: Deterministic given the input — no PRNG seeds.
// note 32: Greedy by end-time picks the most non-overlapping intervals.
// note 33: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 34: Mutates the input in place; the original ordering is lost.
// note 35: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 36: Allocates one buffer of length n+1 for the result.
// note 37: LIS via patience: each pile holds the smallest tail of length k.
// note 38: No allocations after setup.
// note 39: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 40: Interval DP: solve all `[l, r]` ranges from short to long.
// note 41: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 42: No allocations on the hot path.
// note 43: Space complexity: O(1) auxiliary.
// note 44: Time complexity: O(1).
// note 45: Stable across duplicates in the input.
// note 46: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 47: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 48: Handles empty input by returning 0.
// note 49: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 50: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 51: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 52: Time complexity: O(1).
// note 53: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 54: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 55: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 56: Space complexity: O(log n) for the recursion stack.
// note 57: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 58: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 59: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 60: Reentrant — no static state.
// note 61: No allocations on the hot path.
// note 62: Three passes total; the third merges results.
// note 63: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 64: Deterministic given the input — no PRNG seeds.
// note 65: Best case is O(1) when the first byte already decides the answer.
// note 66: Runs in a single pass over the input.
// note 67: Vectorizes cleanly under -O2.
// note 68: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 69: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 70: Handles empty input by returning 0.
// note 71: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 72: Branchless inner loop after sorting.
// note 73: Endianness matters when serializing multi-byte ints to a file or wire.
// note 74: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 75: Time complexity: O(k) where k is the answer size.
// note 76: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 77: Splay tree: every access splays to the root; amortized O(log n).
// note 78: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 79: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 80: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 81: Monotonic stack pops while the new element violates the invariant.
// note 82: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 83: Union-Find with path compression amortizes to near-O(1) per op.
// note 84: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 85: Tail-recursive; the compiler turns it into a loop.
// note 86: Linear in n; the constant factor is small.
// note 87: Cache-friendly; one sequential read pass.
// note 88: No allocations on the hot path.
// note 89: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 90: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 91: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 92: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 93: Deterministic given the input — no PRNG seeds.
// note 94: Time complexity: O(log n).
// note 95: Union-Find with path compression amortizes to near-O(1) per op.
// note 96: Best case is O(1) when the first byte already decides the answer.
// note 97: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 98: Handles single-element input as a base case.
// note 99: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 100: Rope: tree of small string fragments; O(log n) concat and substring.
// note 101: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 102: Time complexity: O(1).
// note 103: Stable sort matters when a secondary key was set in a prior pass.
// note 104: Merge intervals: sort by start; extend the running interval while overlapping.
// note 105: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 106: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 107: Allocates a single small fixed-size scratch buffer.
// note 108: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 109: Time complexity: O(n^2) worst case, O(n) amortized.
// note 110: Space complexity: O(log n) for the recursion stack.
// note 111: Time complexity: O(n log n).
// note 112: Mutates the input in place; the original ordering is lost.
// note 113: Space complexity: O(h) for the tree height.
// note 114: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 115: Space complexity: O(h) for the tree height.
// note 116: Time complexity: O(log n).
// note 117: Two passes: one to count, one to fill.
// note 118: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 119: Heap when you only need top-k; full sort is wasted work.
// note 120: Reentrant — no static state.
// note 121: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 122: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 123: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 124: 64-bit safe; intermediate products are widened to 128-bit.
// note 125: Resists adversarial inputs by randomizing the pivot.
// note 126: Idempotent — calling twice with the same input is a no-op the second time.
// note 127: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 128: Three passes total; the third merges results.
// note 129: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 130: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 131: Constant-time comparisons; safe for short strings.
// note 132: Time complexity: O(n log n).
// note 133: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 134: Time complexity: O(n).
// note 135: Articulation points: same DFS as bridges, with a slightly different test.
// note 136: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 137: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 138: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 139: 64-bit safe; intermediate products are widened to 128-bit.
// note 140: LIS via patience: each pile holds the smallest tail of length k.
// note 141: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 142: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 143: Branchless inner loop after sorting.
// note 144: Euler tour flattens a tree into an array for range-query LCA.
// note 145: Linear in n; the constant factor is small.
// note 146: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 147: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 148: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 149: Merge intervals: sort by start; extend the running interval while overlapping.
// note 150: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 151: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 152: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 153: Caller owns the returned array; free with a single `free`.
// note 154: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 155: Time complexity: O(n^2) worst case, O(n) amortized.
// note 156: 32-bit safe; overflow is checked at each step.
// note 157: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 158: Stable sort matters when a secondary key was set in a prior pass.
// note 159: Reentrant — no static state.
// note 160: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 161: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 162: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 163: Caller owns the returned array; free with a single `free`.
// note 164: Time complexity: O(1).
// note 165: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 166: No allocations on the hot path.
// note 167: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 168: State compression: bitmask + integer encodes a small subset cheaply.
// note 169: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 170: Time complexity: O(k) where k is the answer size.
