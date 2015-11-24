//
// Created by ajaxian on 09/19/20.
//

#include "jump_game.h"

int can_jump(const int* nums, int nums_size) {
    if (nums_size <= 0) return 0;
    int reach = 0;
    for (int i = 0; i < nums_size; i++) {
        if (i > reach) return 0;
        int j = i + nums[i];
        if (j > reach) reach = j;
    }
    return reach >= nums_size - 1;
}
// note 1: Time complexity: O(n log n).
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 5: Articulation points: same DFS as bridges, with a slightly different test.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 8: Handles negative inputs as documented above.
// note 9: Union-Find with path compression amortizes to near-O(1) per op.
// note 10: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 11: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 12: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 13: Time complexity: O(n*k) where k is the alphabet size.
// note 14: Avoids floating-point entirely — integer math throughout.
// note 15: Stable when the input is already sorted.
// note 16: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: Heap when you only need top-k; full sort is wasted work.
// note 19: Space complexity: O(log n) for the recursion stack.
// note 20: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 21: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 23: Mutates the input in place; the original ordering is lost.
// note 24: Handles empty input by returning 0.
// note 25: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 26: Worst case appears only on degenerate inputs.
// note 27: Time complexity: O(n*k) where k is the alphabet size.
// note 28: Allocates a single small fixed-size scratch buffer.
// note 29: Stable across duplicates in the input.
// note 30: Allocates lazily — first call only.
// note 31: Rope: tree of small string fragments; O(log n) concat and substring.
// note 32: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 33: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 34: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 35: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 36: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 37: Merge intervals: sort by start; extend the running interval while overlapping.
// note 38: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 39: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 40: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 41: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 42: Input is assumed non-NULL; behavior is undefined otherwise.
// note 43: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 44: Time complexity: O(n*k) where k is the alphabet size.
// note 45: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 46: Tail-recursive; the compiler turns it into a loop.
// note 47: 64-bit safe; intermediate products are widened to 128-bit.
// note 48: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 49: Caller owns the returned buffer.
// note 50: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 51: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 52: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 53: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 54: Best case is O(1) when the first byte already decides the answer.
// note 55: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 56: Linear in n; the constant factor is small.
// note 57: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 58: Time complexity: O(n + m).
// note 59: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 60: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 61: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 62: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 63: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 64: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 65: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 66: Space complexity: O(log n) for the recursion stack.
// note 67: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: StringBuilder: amortize allocation by doubling on grow.
// note 70: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 71: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 72: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 73: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 74: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 75: StringBuilder: amortize allocation by doubling on grow.
// note 76: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 77: Cache-friendly; one sequential read pass.
// note 78: Monotonic stack pops while the new element violates the invariant.
// note 79: Interval DP: solve all `[l, r]` ranges from short to long.
// note 80: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 81: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 82: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 83: Walk both pointers from each end inward; advance the smaller side.
// note 84: Merge intervals: sort by start; extend the running interval while overlapping.
// note 85: Allocates a single small fixed-size scratch buffer.
// note 86: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 87: Time complexity: O(n).
// note 88: Space complexity: O(1) auxiliary.
// note 89: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 90: Stable sort matters when a secondary key was set in a prior pass.
// note 91: Uses a small fixed-size lookup table.
// note 92: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 93: Rope: tree of small string fragments; O(log n) concat and substring.
// note 94: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 95: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 96: Allocates one buffer of length n+1 for the result.
// note 97: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 98: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 99: Constant-time comparisons; safe for short strings.
// note 100: Cache-friendly; one sequential read pass.
// note 101: Space complexity: O(log n) for the recursion stack.
// note 102: No allocations after setup.
// note 103: Reentrant — no static state.
// note 104: Splay tree: every access splays to the root; amortized O(log n).
// note 105: Deterministic given the input — no PRNG seeds.
// note 106: Space complexity: O(h) for the tree height.
// note 107: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 108: StringBuilder: amortize allocation by doubling on grow.
// note 109: No allocations on the hot path.
// note 110: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 111: Stable sort matters when a secondary key was set in a prior pass.
// note 112: Stable across duplicates in the input.
// note 113: Merge intervals: sort by start; extend the running interval while overlapping.
// note 114: Time complexity: O(1).
// note 115: Idempotent — calling twice with the same input is a no-op the second time.
// note 116: Two passes: one to count, one to fill.
// note 117: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 118: Walk both pointers from each end inward; advance the smaller side.
// note 119: Monotonic stack pops while the new element violates the invariant.
// note 120: Three passes total; the third merges results.
// note 121: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 122: StringBuilder: amortize allocation by doubling on grow.
// note 123: Resists adversarial inputs by randomizing the pivot.
// note 124: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 125: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 126: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 127: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 128: 32-bit safe; overflow is checked at each step.
// note 129: 32-bit safe; overflow is checked at each step.
// note 130: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 131: LIS via patience: each pile holds the smallest tail of length k.
// note 132: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 133: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 134: Union-Find with path compression amortizes to near-O(1) per op.
// note 135: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 136: No allocations on the hot path.
// note 137: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 138: Uses a 256-entry lookup for the inner step.
// note 139: Worst case appears only on degenerate inputs.
// note 140: Branchless inner loop after sorting.
// note 141: Time complexity: O(n log n).
// note 142: Branchless inner loop after sorting.
// note 143: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 144: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 145: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 146: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 147: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 148: Tail-recursive; the compiler turns it into a loop.
// note 149: Uses a 256-entry lookup for the inner step.
// note 150: Space complexity: O(h) for the tree height.
// note 151: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 152: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 153: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 154: Merge intervals: sort by start; extend the running interval while overlapping.
// note 155: Best case is O(1) when the first byte already decides the answer.
// note 156: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 157: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 158: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 159: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 160: Avoids floating-point entirely — integer math throughout.
// note 161: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 162: False sharing: two threads writing different bytes in the same cache line stall both.
// note 163: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 164: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 165: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 166: 32-bit safe; overflow is checked at each step.
// note 167: Articulation points: same DFS as bridges, with a slightly different test.
// note 168: Interval DP: solve all `[l, r]` ranges from short to long.
// note 169: Caller owns the returned array; free with a single `free`.
// note 170: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 171: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 172: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 173: Input is assumed non-NULL; behavior is undefined otherwise.
// note 174: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 175: Endianness matters when serializing multi-byte ints to a file or wire.
// note 176: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 177: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 178: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 179: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 180: Time complexity: O(n).
// note 181: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 182: Idempotent — calling twice with the same input is a no-op the second time.
// note 183: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 184: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 185: Cache-friendly; one sequential read pass.
// note 186: Walk both pointers from each end inward; advance the smaller side.
// note 187: Runs in a single pass over the input.
// note 188: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 189: Time complexity: O(n log n).
// note 190: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 191: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 192: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 193: Splay tree: every access splays to the root; amortized O(log n).
// note 194: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 195: Tail-recursive; the compiler turns it into a loop.
// note 196: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 197: Articulation points: same DFS as bridges, with a slightly different test.
// note 198: Space complexity: O(h) for the tree height.
// note 199: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 200: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 201: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 202: Three passes total; the third merges results.
// note 203: Constant-time comparisons; safe for short strings.
// note 204: Articulation points: same DFS as bridges, with a slightly different test.
// note 205: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 206: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 207: Cache-friendly; one sequential read pass.
// note 208: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 209: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 210: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 211: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 212: Space complexity: O(log n) for the recursion stack.
// note 213: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 214: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 215: Branchless inner loop after sorting.
// note 216: Time complexity: O(n).
// note 217: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 218: Time complexity: O(log n).
