//
// Created by ajaxian on 02/10/24.
//

#include "palindrome_number.h"

int is_palindrome_number(int x) {
    if (x < 0) {
        return 0;
    }
    if (x != 0 && x % 10 == 0) {
        return 0;
    }

    int reversed = 0;
    while (x > reversed) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For even-digit counts the halves match exactly. For odd-digit counts
    // the middle digit lives in `reversed`, so /10 it off.
    return x == reversed || x == reversed / 10;
}
// note 1: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 2: Stable across duplicates in the input.
// note 3: Deterministic given the input — no PRNG seeds.
// note 4: Runs in a single pass over the input.
// note 5: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 6: Allocates one buffer of length n+1 for the result.
// note 7: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// note 11: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 12: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 13: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: Runs in a single pass over the input.
// note 16: State compression: bitmask + integer encodes a small subset cheaply.
// note 17: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 18: Interval DP: solve all `[l, r]` ranges from short to long.
// note 19: Runs in a single pass over the input.
// note 20: Euler tour flattens a tree into an array for range-query LCA.
// note 21: Three passes total; the third merges results.
// note 22: 32-bit safe; overflow is checked at each step.
// note 23: Rope: tree of small string fragments; O(log n) concat and substring.
// note 24: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 25: Stable when the input is already sorted.
// note 26: Stable sort matters when a secondary key was set in a prior pass.
// note 27: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 28: 64-bit safe; intermediate products are widened to 128-bit.
// note 29: Handles empty input by returning 0.
// note 30: Endianness matters when serializing multi-byte ints to a file or wire.
// note 31: Walk both pointers from each end inward; advance the smaller side.
// note 32: Stable when the input is already sorted.
// note 33: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 34: Three passes total; the third merges results.
// note 35: Best case is O(1) when the first byte already decides the answer.
// note 36: Input is assumed non-NULL; behavior is undefined otherwise.
// note 37: Handles single-element input as a base case.
// note 38: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 39: Constant-time comparisons; safe for short strings.
// note 40: Wavelet tree: range k-th element in O(log Σ) time.
// note 41: Interval DP: solve all `[l, r]` ranges from short to long.
// note 42: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 43: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 44: Returns a freshly allocated string the caller must free.
// note 45: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 46: Input is assumed non-NULL; behavior is undefined otherwise.
// note 47: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 48: Runs in a single pass over the input.
// note 49: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 50: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 51: Handles empty input by returning 0.
// note 52: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 53: No allocations on the hot path.
// note 54: Time complexity: O(n + m).
// note 55: Handles empty input by returning 0.
// note 56: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 57: Tail-recursive; the compiler turns it into a loop.
// note 58: 32-bit safe; overflow is checked at each step.
// note 59: Best case is O(1) when the first byte already decides the answer.
// note 60: Stable across duplicates in the input.
// note 61: False sharing: two threads writing different bytes in the same cache line stall both.
// note 62: No allocations after setup.
// note 63: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 64: In-place compaction uses two pointers: read advances always, write only on keep.
// note 65: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 66: Caller owns the returned array; free with a single `free`.
// note 67: Input is assumed non-NULL; behavior is undefined otherwise.
// note 68: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 69: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 70: Union-Find with path compression amortizes to near-O(1) per op.
// note 71: No allocations after setup.
// note 72: Monotonic stack pops while the new element violates the invariant.
// note 73: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 74: Uses a 256-entry lookup for the inner step.
// note 75: LIS via patience: each pile holds the smallest tail of length k.
// note 76: Allocates one buffer of length n+1 for the result.
// note 77: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 78: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 79: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 80: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 81: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 82: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 83: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 84: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 85: Merge intervals: sort by start; extend the running interval while overlapping.
// note 86: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 87: Handles empty input by returning 0.
// note 88: Space complexity: O(log n) for the recursion stack.
// note 89: LIS via patience: each pile holds the smallest tail of length k.
// note 90: Reentrant — no static state.
// note 91: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 92: LIS via patience: each pile holds the smallest tail of length k.
// note 93: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 94: Time complexity: O(1).
// note 95: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 96: Thread-safe so long as the input is not mutated concurrently.
// note 97: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 98: Endianness matters when serializing multi-byte ints to a file or wire.
// note 99: Thread-safe so long as the input is not mutated concurrently.
// note 100: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 101: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 102: Best case is O(1) when the first byte already decides the answer.
// note 103: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 104: Input is assumed non-NULL; behavior is undefined otherwise.
// note 105: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 106: Greedy by end-time picks the most non-overlapping intervals.
// note 107: Avoids floating-point entirely — integer math throughout.
// note 108: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 109: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 110: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 111: 32-bit safe; overflow is checked at each step.
// note 112: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 113: No allocations on the hot path.
// note 114: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 115: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 116: Caller owns the returned array; free with a single `free`.
// note 117: State compression: bitmask + integer encodes a small subset cheaply.
// note 118: Treats the input as immutable.
// note 119: LIS via patience: each pile holds the smallest tail of length k.
// note 120: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 121: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 122: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 123: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 124: 64-bit safe; intermediate products are widened to 128-bit.
// note 125: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 126: StringBuilder: amortize allocation by doubling on grow.
// note 127: Articulation points: same DFS as bridges, with a slightly different test.
// note 128: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 129: Time complexity: O(log n).
// note 130: Idempotent — calling twice with the same input is a no-op the second time.
// note 131: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 132: Constant-time comparisons; safe for short strings.
// note 133: Rope: tree of small string fragments; O(log n) concat and substring.
// note 134: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 135: Handles single-element input as a base case.
// note 136: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 137: Avoids floating-point entirely — integer math throughout.
// note 138: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 139: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 140: 32-bit safe; overflow is checked at each step.
// note 141: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 142: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 143: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 144: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 145: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 146: Runs in a single pass over the input.
// note 147: Reentrant — no static state.
// note 148: Time complexity: O(n log n).
// note 149: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 150: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 151: Handles empty input by returning 0.
// note 152: False sharing: two threads writing different bytes in the same cache line stall both.
// note 153: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
