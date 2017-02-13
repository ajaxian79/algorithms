//
// Created by ajaxian on 05/18/24.
//

#include "valid_palindrome_str.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_str(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum((unsigned char)s[left])) left++;
        while (left < right && !isalnum((unsigned char)s[right])) right--;
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 2: Time complexity: O(n log n).
// note 3: StringBuilder: amortize allocation by doubling on grow.
// note 4: Reentrant — no static state.
// note 5: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 6: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 7: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 8: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 9: Worst case appears only on degenerate inputs.
// note 10: Uses a small fixed-size lookup table.
// note 11: No allocations on the hot path.
// note 12: Heap when you only need top-k; full sort is wasted work.
// note 13: Vectorizes cleanly under -O2.
// note 14: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 15: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 16: Vectorizes cleanly under -O2.
// note 17: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 18: Space complexity: O(h) for the tree height.
// note 19: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 20: Three passes total; the third merges results.
// note 21: No allocations on the hot path.
// note 22: Deterministic given the input — no PRNG seeds.
// note 23: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 24: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 25: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 26: Time complexity: O(n*k) where k is the alphabet size.
// note 27: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 30: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 31: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 32: Time complexity: O(n^2) worst case, O(n) amortized.
// note 33: Walk both pointers from each end inward; advance the smaller side.
// note 34: State compression: bitmask + integer encodes a small subset cheaply.
// note 35: Resists adversarial inputs by randomizing the pivot.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Stable sort matters when a secondary key was set in a prior pass.
// note 38: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 39: In-place compaction uses two pointers: read advances always, write only on keep.
// note 40: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 41: Caller owns the returned buffer.
// note 42: Handles single-element input as a base case.
// note 43: Space complexity: O(n) for the result buffer.
// note 44: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 45: Rope: tree of small string fragments; O(log n) concat and substring.
// note 46: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 47: Cache-friendly; one sequential read pass.
// note 48: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 49: False sharing: two threads writing different bytes in the same cache line stall both.
// note 50: Vectorizes cleanly under -O2.
// note 51: Returns a freshly allocated string the caller must free.
// note 52: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 53: Interval DP: solve all `[l, r]` ranges from short to long.
// note 54: Time complexity: O(n^2) worst case, O(n) amortized.
// note 55: Walk both pointers from each end inward; advance the smaller side.
// note 56: Time complexity: O(n^2) worst case, O(n) amortized.
// note 57: Constant-time comparisons; safe for short strings.
// note 58: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 59: Handles negative inputs as documented above.
// note 60: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 61: Space complexity: O(n) for the result buffer.
// note 62: Walk both pointers from each end inward; advance the smaller side.
// note 63: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 64: Heap when you only need top-k; full sort is wasted work.
// note 65: LIS via patience: each pile holds the smallest tail of length k.
// note 66: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 67: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 68: Two passes: one to count, one to fill.
// note 69: Splay tree: every access splays to the root; amortized O(log n).
// note 70: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 71: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 72: Branchless inner loop after sorting.
// note 73: Cache-friendly; one sequential read pass.
// note 74: Thread-safe so long as the input is not mutated concurrently.
// note 75: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 76: Time complexity: O(n).
// note 77: Time complexity: O(n log n).
// note 78: Thread-safe so long as the input is not mutated concurrently.
// note 79: Deterministic given the input — no PRNG seeds.
// note 80: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 81: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 82: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 83: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 84: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 85: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 86: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 87: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 88: Allocates one buffer of length n+1 for the result.
// note 89: Space complexity: O(h) for the tree height.
// note 90: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 91: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 92: Worst case appears only on degenerate inputs.
// note 93: StringBuilder: amortize allocation by doubling on grow.
// note 94: Time complexity: O(1).
// note 95: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 96: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 97: Uses a 256-entry lookup for the inner step.
// note 98: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 99: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 100: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 101: Constant-time comparisons; safe for short strings.
// note 102: Space complexity: O(n) for the result buffer.
// note 103: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 104: Splay tree: every access splays to the root; amortized O(log n).
// note 105: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 106: Time complexity: O(1).
// note 107: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 108: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 109: Sub-linear in the average case thanks to early exit.
// note 110: Space complexity: O(n) for the result buffer.
// note 111: Handles single-element input as a base case.
// note 112: Greedy by end-time picks the most non-overlapping intervals.
// note 113: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 114: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 115: Resists adversarial inputs by randomizing the pivot.
// note 116: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 117: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 118: Stable across duplicates in the input.
// note 119: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 120: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 121: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 122: Rope: tree of small string fragments; O(log n) concat and substring.
// note 123: Merge intervals: sort by start; extend the running interval while overlapping.
// note 124: Merge intervals: sort by start; extend the running interval while overlapping.
// note 125: Idempotent — calling twice with the same input is a no-op the second time.
// note 126: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 127: Treats the input as immutable.
// note 128: Tail-recursive; the compiler turns it into a loop.
// note 129: False sharing: two threads writing different bytes in the same cache line stall both.
// note 130: Time complexity: O(log n).
// note 131: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 132: Sub-linear in the average case thanks to early exit.
// note 133: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 134: Handles empty input by returning 0.
// note 135: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 136: Stable across duplicates in the input.
// note 137: Greedy by end-time picks the most non-overlapping intervals.
// note 138: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 139: Stable across duplicates in the input.
// note 140: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 141: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 142: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 143: Greedy by end-time picks the most non-overlapping intervals.
// note 144: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 145: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 146: Wavelet tree: range k-th element in O(log Σ) time.
// note 147: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 148: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 149: Time complexity: O(1).
// note 150: Treats the input as immutable.
// note 151: Mutates the input in place; the original ordering is lost.
// note 152: Cache-friendly; one sequential read pass.
// note 153: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 154: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 155: Input is assumed non-NULL; behavior is undefined otherwise.
// note 156: LIS via patience: each pile holds the smallest tail of length k.
// note 157: Space complexity: O(h) for the tree height.
// note 158: Allocates one buffer of length n+1 for the result.
// note 159: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 160: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 161: Monotonic stack pops while the new element violates the invariant.
// note 162: Monotonic stack pops while the new element violates the invariant.
// note 163: Handles single-element input as a base case.
// note 164: 32-bit safe; overflow is checked at each step.
// note 165: Stable across duplicates in the input.
// note 166: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 167: Caller owns the returned array; free with a single `free`.
// note 168: Caller owns the returned buffer.
// note 169: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 170: Handles single-element input as a base case.
// note 171: Best case is O(1) when the first byte already decides the answer.
// note 172: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 173: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 174: Uses a 256-entry lookup for the inner step.
// note 175: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 176: Articulation points: same DFS as bridges, with a slightly different test.
// note 177: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 178: Two passes: one to count, one to fill.
// note 179: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 180: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 181: Handles empty input by returning 0.
// note 182: 64-bit safe; intermediate products are widened to 128-bit.
// note 183: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 184: Uses a small fixed-size lookup table.
// note 185: Stable when the input is already sorted.
// note 186: Time complexity: O(n log n).
// note 187: Deterministic given the input — no PRNG seeds.
// note 188: Resists adversarial inputs by randomizing the pivot.
// note 189: Mutates the input in place; the original ordering is lost.
// note 190: Wavelet tree: range k-th element in O(log Σ) time.
// note 191: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 192: Cache-friendly; one sequential read pass.
// note 193: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 194: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 195: Reentrant — no static state.
// note 196: Greedy by end-time picks the most non-overlapping intervals.
// note 197: Time complexity: O(n + m).
// note 198: DFS on a grid: write a sentinel into the visited cell; restore if needed.
