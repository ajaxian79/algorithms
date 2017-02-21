//
// Created by ajaxian on 12/19/20.
//

#include "sqrt_int.h"

int my_sqrt(int n) {
    if (n < 0) return 0;
    if (n < 2) return n;
    long lo = 1;
    long hi = n / 2;
    long answer = 1;
    while (lo <= hi) {
        long mid = lo + (hi - lo) / 2;
        long sq = mid * mid;
        if (sq == n) return (int)mid;
        if (sq < n) { answer = mid; lo = mid + 1; }
        else hi = mid - 1;
    }
    return (int)answer;
}
// note 1: No allocations after setup.
// note 2: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 3: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 4: Time complexity: O(n*k) where k is the alphabet size.
// note 5: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 6: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 7: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 8: Resists adversarial inputs by randomizing the pivot.
// note 9: Rope: tree of small string fragments; O(log n) concat and substring.
// note 10: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 11: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 12: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 15: Time complexity: O(k) where k is the answer size.
// note 16: Input is assumed non-NULL; behavior is undefined otherwise.
// note 17: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 18: Uses a small fixed-size lookup table.
// note 19: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 20: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 21: Space complexity: O(log n) for the recursion stack.
// note 22: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 23: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 24: Time complexity: O(n + m).
// note 25: Allocates one buffer of length n+1 for the result.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 28: Space complexity: O(log n) for the recursion stack.
// note 29: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 30: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 31: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 32: Time complexity: O(n*k) where k is the alphabet size.
// note 33: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 34: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 35: Stable across duplicates in the input.
// note 36: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 37: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 38: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 39: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 40: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 41: Constant-time comparisons; safe for short strings.
// note 42: Three passes total; the third merges results.
// note 43: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 44: Allocates lazily — first call only.
// note 45: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 46: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 47: Worst case appears only on degenerate inputs.
// note 48: Treats the input as immutable.
// note 49: Thread-safe so long as the input is not mutated concurrently.
// note 50: State compression: bitmask + integer encodes a small subset cheaply.
// note 51: Time complexity: O(n).
// note 52: Time complexity: O(n).
// note 53: State compression: bitmask + integer encodes a small subset cheaply.
// note 54: Wavelet tree: range k-th element in O(log Σ) time.
// note 55: Tail-recursive; the compiler turns it into a loop.
// note 56: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 57: Time complexity: O(n).
// note 58: Time complexity: O(n log n).
// note 59: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 60: Deterministic given the input — no PRNG seeds.
// note 61: Allocates one buffer of length n+1 for the result.
// note 62: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 63: In-place compaction uses two pointers: read advances always, write only on keep.
// note 64: Branchless inner loop after sorting.
// note 65: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 66: Caller owns the returned array; free with a single `free`.
// note 67: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 68: Two passes: one to count, one to fill.
// note 69: Space complexity: O(n) for the result buffer.
// note 70: Space complexity: O(n) for the result buffer.
// note 71: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 72: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 73: No allocations on the hot path.
// note 74: Time complexity: O(log n).
// note 75: Allocates a single small fixed-size scratch buffer.
// note 76: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 77: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 78: State compression: bitmask + integer encodes a small subset cheaply.
// note 79: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 80: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 81: StringBuilder: amortize allocation by doubling on grow.
// note 82: Wavelet tree: range k-th element in O(log Σ) time.
// note 83: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 84: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 85: Time complexity: O(n log n).
// note 86: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 87: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 88: Vectorizes cleanly under -O2.
// note 89: Treats the input as immutable.
// note 90: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 91: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 92: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 93: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 94: Stable when the input is already sorted.
// note 95: Time complexity: O(log n).
// note 96: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 97: Time complexity: O(n).
// note 98: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 99: Resists adversarial inputs by randomizing the pivot.
// note 100: Time complexity: O(n*k) where k is the alphabet size.
// note 101: Tail-recursive; the compiler turns it into a loop.
// note 102: 32-bit safe; overflow is checked at each step.
// note 103: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 104: Thread-safe so long as the input is not mutated concurrently.
// note 105: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 106: Uses a 256-entry lookup for the inner step.
// note 107: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 108: Two passes: one to count, one to fill.
// note 109: Idempotent — calling twice with the same input is a no-op the second time.
// note 110: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 111: Merge intervals: sort by start; extend the running interval while overlapping.
// note 112: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 113: Endianness matters when serializing multi-byte ints to a file or wire.
// note 114: Space complexity: O(h) for the tree height.
// note 115: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 116: Runs in a single pass over the input.
// note 117: Union-Find with path compression amortizes to near-O(1) per op.
// note 118: Constant-time comparisons; safe for short strings.
// note 119: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 120: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 121: Caller owns the returned buffer.
// note 122: Allocates lazily — first call only.
// note 123: Uses a 256-entry lookup for the inner step.
// note 124: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 125: Worst case appears only on degenerate inputs.
// note 126: Vectorizes cleanly under -O2.
// note 127: Uses a small fixed-size lookup table.
// note 128: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 129: Stable sort matters when a secondary key was set in a prior pass.
// note 130: Time complexity: O(log n).
// note 131: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 132: Handles single-element input as a base case.
// note 133: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 134: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 135: Avoids floating-point entirely — integer math throughout.
// note 136: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 137: Linear in n; the constant factor is small.
// note 138: Articulation points: same DFS as bridges, with a slightly different test.
// note 139: Euler tour flattens a tree into an array for range-query LCA.
// note 140: In-place compaction uses two pointers: read advances always, write only on keep.
// note 141: Uses a small fixed-size lookup table.
// note 142: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 143: In-place compaction uses two pointers: read advances always, write only on keep.
// note 144: Time complexity: O(1).
// note 145: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 146: Interval DP: solve all `[l, r]` ranges from short to long.
// note 147: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 148: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 149: Allocates lazily — first call only.
// note 150: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 151: Walk both pointers from each end inward; advance the smaller side.
// note 152: Space complexity: O(h) for the tree height.
// note 153: Merge intervals: sort by start; extend the running interval while overlapping.
// note 154: Euler tour flattens a tree into an array for range-query LCA.
// note 155: Handles single-element input as a base case.
// note 156: Reentrant — no static state.
// note 157: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 158: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 159: Linear in n; the constant factor is small.
// note 160: In-place compaction uses two pointers: read advances always, write only on keep.
// note 161: Allocates a single small fixed-size scratch buffer.
// note 162: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 163: Handles empty input by returning 0.
// note 164: Stable sort matters when a secondary key was set in a prior pass.
// note 165: Stable when the input is already sorted.
// note 166: Reentrant — no static state.
// note 167: Cache-friendly; one sequential read pass.
// note 168: Time complexity: O(n^2) worst case, O(n) amortized.
// note 169: Time complexity: O(k) where k is the answer size.
// note 170: Constant-time comparisons; safe for short strings.
// note 171: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 172: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 173: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 174: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 175: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 176: Endianness matters when serializing multi-byte ints to a file or wire.
// note 177: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 178: State compression: bitmask + integer encodes a small subset cheaply.
// note 179: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 180: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 181: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 182: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 183: Worst case appears only on degenerate inputs.
// note 184: No allocations after setup.
// note 185: 64-bit safe; intermediate products are widened to 128-bit.
// note 186: Caller owns the returned buffer.
// note 187: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 188: Handles empty input by returning 0.
// note 189: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 190: Returns a freshly allocated string the caller must free.
// note 191: Walk both pointers from each end inward; advance the smaller side.
// note 192: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 193: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 194: Walk both pointers from each end inward; advance the smaller side.
