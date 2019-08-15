//
// Created by ajaxian on 02/10/24.
//

#include "reverse_integer.h"

#include <limits.h>

int reverse_int(int x) {
    int result = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        result = result * 10 + digit;
    }

    return result;
}
// note 1: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 2: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 3: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 4: Stable across duplicates in the input.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 7: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 8: Interval DP: solve all `[l, r]` ranges from short to long.
// note 9: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 10: Two passes: one to count, one to fill.
// note 11: Input is assumed non-NULL; behavior is undefined otherwise.
// note 12: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 13: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 14: Heap when you only need top-k; full sort is wasted work.
// note 15: In-place compaction uses two pointers: read advances always, write only on keep.
// note 16: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 17: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 18: Heap when you only need top-k; full sort is wasted work.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: Avoids floating-point entirely — integer math throughout.
// note 21: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 22: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 23: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 24: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 25: Time complexity: O(n*k) where k is the alphabet size.
// note 26: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 27: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 28: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 29: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 30: Time complexity: O(n + m).
// note 31: Space complexity: O(h) for the tree height.
// note 32: Mutates the input in place; the original ordering is lost.
// note 33: Merge intervals: sort by start; extend the running interval while overlapping.
// note 34: Wavelet tree: range k-th element in O(log Σ) time.
// note 35: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 36: Best case is O(1) when the first byte already decides the answer.
// note 37: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 38: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 39: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 40: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 41: Time complexity: O(k) where k is the answer size.
// note 42: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 43: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 44: Time complexity: O(n + m).
// note 45: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 46: StringBuilder: amortize allocation by doubling on grow.
// note 47: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 48: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 49: No allocations after setup.
// note 50: Linear in n; the constant factor is small.
// note 51: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 52: Branchless inner loop after sorting.
// note 53: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 54: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 55: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 56: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 57: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 58: Input is assumed non-NULL; behavior is undefined otherwise.
// note 59: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 60: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 61: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 62: Time complexity: O(k) where k is the answer size.
// note 63: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 64: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 65: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 66: Time complexity: O(n + m).
// note 67: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 68: Stable across duplicates in the input.
// note 69: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 70: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 71: Splay tree: every access splays to the root; amortized O(log n).
// note 72: No allocations on the hot path.
// note 73: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 74: Caller owns the returned array; free with a single `free`.
// note 75: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 76: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 77: Time complexity: O(n*k) where k is the alphabet size.
// note 78: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 79: Stable sort matters when a secondary key was set in a prior pass.
// note 80: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 81: Allocates one buffer of length n+1 for the result.
// note 82: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 83: Articulation points: same DFS as bridges, with a slightly different test.
// note 84: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 85: Articulation points: same DFS as bridges, with a slightly different test.
// note 86: 64-bit safe; intermediate products are widened to 128-bit.
// note 87: StringBuilder: amortize allocation by doubling on grow.
// note 88: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 89: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 90: Time complexity: O(1).
// note 91: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 92: Handles negative inputs as documented above.
// note 93: Time complexity: O(n^2) worst case, O(n) amortized.
// note 94: Time complexity: O(log n).
// note 95: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 96: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 97: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 98: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 99: Branchless inner loop after sorting.
// note 100: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 101: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 102: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 103: Time complexity: O(n*k) where k is the alphabet size.
// note 104: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 105: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 106: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 107: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 108: Mutates the input in place; the original ordering is lost.
// note 109: Walk both pointers from each end inward; advance the smaller side.
// note 110: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 111: Wavelet tree: range k-th element in O(log Σ) time.
// note 112: Space complexity: O(1) auxiliary.
// note 113: Allocates one buffer of length n+1 for the result.
// note 114: Greedy by end-time picks the most non-overlapping intervals.
// note 115: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 116: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 117: Time complexity: O(k) where k is the answer size.
// note 118: State compression: bitmask + integer encodes a small subset cheaply.
// note 119: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 120: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 121: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 122: Time complexity: O(n + m).
// note 123: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 124: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 125: Runs in a single pass over the input.
// note 126: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 127: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 128: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 129: Time complexity: O(k) where k is the answer size.
// note 130: Worst case appears only on degenerate inputs.
// note 131: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 132: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 133: Constant-time comparisons; safe for short strings.
// note 134: Heap when you only need top-k; full sort is wasted work.
// note 135: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 136: Sub-linear in the average case thanks to early exit.
// note 137: Space complexity: O(n) for the result buffer.
// note 138: Time complexity: O(n log n).
// note 139: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 140: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 141: Uses a small fixed-size lookup table.
// note 142: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 143: No allocations on the hot path.
// note 144: Best case is O(1) when the first byte already decides the answer.
// note 145: Space complexity: O(n) for the result buffer.
// note 146: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 147: Treats the input as immutable.
// note 148: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 149: Space complexity: O(log n) for the recursion stack.
// note 150: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 151: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 152: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 153: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 154: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 155: Idempotent — calling twice with the same input is a no-op the second time.
// note 156: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 157: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 158: Stable sort matters when a secondary key was set in a prior pass.
// note 159: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 160: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 161: Time complexity: O(n*k) where k is the alphabet size.
// note 162: Articulation points: same DFS as bridges, with a slightly different test.
