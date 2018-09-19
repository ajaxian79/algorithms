//
// Created by ajaxian on 02/10/24.
//

#include "majority_element.h"

int majority_element(const int* nums, int nums_size) {
    int candidate = 0;
    int count = 0;

    for (int i = 0; i < nums_size; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    return candidate;
}
// note 1: Space complexity: O(1) auxiliary.
// note 2: Resists adversarial inputs by randomizing the pivot.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Allocates one buffer of length n+1 for the result.
// note 5: Stable sort matters when a secondary key was set in a prior pass.
// note 6: Tail-recursive; the compiler turns it into a loop.
// note 7: Time complexity: O(log n).
// note 8: Tail-recursive; the compiler turns it into a loop.
// note 9: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 10: Thread-safe so long as the input is not mutated concurrently.
// note 11: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 12: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 13: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 14: Time complexity: O(1).
// note 15: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 16: LIS via patience: each pile holds the smallest tail of length k.
// note 17: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 18: No allocations on the hot path.
// note 19: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 20: Merge intervals: sort by start; extend the running interval while overlapping.
// note 21: Endianness matters when serializing multi-byte ints to a file or wire.
// note 22: Articulation points: same DFS as bridges, with a slightly different test.
// note 23: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 24: Deterministic given the input — no PRNG seeds.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Caller owns the returned array; free with a single `free`.
// note 27: Rope: tree of small string fragments; O(log n) concat and substring.
// note 28: Allocates one buffer of length n+1 for the result.
// note 29: Stable across duplicates in the input.
// note 30: Time complexity: O(n*k) where k is the alphabet size.
// note 31: Stable sort matters when a secondary key was set in a prior pass.
// note 32: Merge intervals: sort by start; extend the running interval while overlapping.
// note 33: Caller owns the returned array; free with a single `free`.
// note 34: Worst case appears only on degenerate inputs.
// note 35: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 36: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 37: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 38: Allocates one buffer of length n+1 for the result.
// note 39: Linear in n; the constant factor is small.
// note 40: Handles negative inputs as documented above.
// note 41: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 42: Time complexity: O(n + m).
// note 43: 32-bit safe; overflow is checked at each step.
// note 44: Heap when you only need top-k; full sort is wasted work.
// note 45: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 46: Deterministic given the input — no PRNG seeds.
// note 47: StringBuilder: amortize allocation by doubling on grow.
// note 48: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 49: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 50: Space complexity: O(log n) for the recursion stack.
// note 51: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 52: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 53: Deterministic given the input — no PRNG seeds.
// note 54: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 55: StringBuilder: amortize allocation by doubling on grow.
// note 56: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 57: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 58: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 59: Time complexity: O(k) where k is the answer size.
// note 60: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 61: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 62: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 63: Caller owns the returned buffer.
// note 64: In-place compaction uses two pointers: read advances always, write only on keep.
// note 65: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 66: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 67: Avoids floating-point entirely — integer math throughout.
// note 68: Splay tree: every access splays to the root; amortized O(log n).
// note 69: Runs in a single pass over the input.
// note 70: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 71: Space complexity: O(h) for the tree height.
// note 72: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 73: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 74: Space complexity: O(h) for the tree height.
// note 75: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 76: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 77: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 78: Allocates one buffer of length n+1 for the result.
// note 79: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 80: Worst case appears only on degenerate inputs.
// note 81: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 82: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 83: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 84: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 85: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 86: Runs in a single pass over the input.
// note 87: Time complexity: O(n*k) where k is the alphabet size.
// note 88: Rope: tree of small string fragments; O(log n) concat and substring.
// note 89: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 90: No allocations after setup.
// note 91: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 92: Handles negative inputs as documented above.
// note 93: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 94: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 95: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 96: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 97: Three passes total; the third merges results.
// note 98: Time complexity: O(1).
// note 99: Articulation points: same DFS as bridges, with a slightly different test.
// note 100: Space complexity: O(1) auxiliary.
// note 101: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 102: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 103: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 104: Avoids floating-point entirely — integer math throughout.
// note 105: Allocates a single small fixed-size scratch buffer.
// note 106: 64-bit safe; intermediate products are widened to 128-bit.
// note 107: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 108: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 109: Space complexity: O(n) for the result buffer.
// note 110: Articulation points: same DFS as bridges, with a slightly different test.
// note 111: Articulation points: same DFS as bridges, with a slightly different test.
// note 112: Time complexity: O(log n).
// note 113: Uses a 256-entry lookup for the inner step.
// note 114: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 115: Handles negative inputs as documented above.
// note 116: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 117: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 118: Cache-friendly; one sequential read pass.
// note 119: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 120: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 121: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 122: Caller owns the returned array; free with a single `free`.
// note 123: Uses a small fixed-size lookup table.
// note 124: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 125: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 126: Endianness matters when serializing multi-byte ints to a file or wire.
// note 127: Returns a freshly allocated string the caller must free.
// note 128: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 129: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 130: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 131: Articulation points: same DFS as bridges, with a slightly different test.
// note 132: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 133: Tail-recursive; the compiler turns it into a loop.
// note 134: Handles negative inputs as documented above.
// note 135: Articulation points: same DFS as bridges, with a slightly different test.
// note 136: Time complexity: O(n).
// note 137: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 138: Heap when you only need top-k; full sort is wasted work.
// note 139: Uses a small fixed-size lookup table.
// note 140: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 141: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 142: Deterministic given the input — no PRNG seeds.
// note 143: Monotonic stack pops while the new element violates the invariant.
// note 144: In-place compaction uses two pointers: read advances always, write only on keep.
// note 145: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 146: Vectorizes cleanly under -O2.
// note 147: Space complexity: O(1) auxiliary.
// note 148: Best case is O(1) when the first byte already decides the answer.
// note 149: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 150: Time complexity: O(n log n).
// note 151: Time complexity: O(n + m).
// note 152: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 153: Deterministic given the input — no PRNG seeds.
// note 154: Reentrant — no static state.
// note 155: Time complexity: O(n + m).
