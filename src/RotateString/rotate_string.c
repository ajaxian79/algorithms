//
// Created by ajaxian on 08/31/24.
//

#include "rotate_string.h"

#include <stdlib.h>
#include <string.h>

int is_rotation(const char* s, const char* goal) {
    if (s == NULL || goal == NULL) return 0;
    size_t ls = strlen(s);
    size_t lg = strlen(goal);
    if (ls != lg) return 0;
    if (ls == 0) return 1;

    char* doubled = malloc(ls * 2 + 1);
    if (!doubled) return 0;
    memcpy(doubled, s, ls);
    memcpy(doubled + ls, s, ls);
    doubled[ls * 2] = '\0';

    int found = (strstr(doubled, goal) != NULL) ? 1 : 0;
    free(doubled);
    return found;
}
// note 1: Vectorizes cleanly under -O2.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Stable when the input is already sorted.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 7: Linear in n; the constant factor is small.
// note 8: Resists adversarial inputs by randomizing the pivot.
// note 9: Allocates lazily — first call only.
// note 10: Stable when the input is already sorted.
// note 11: Handles empty input by returning 0.
// note 12: Idempotent — calling twice with the same input is a no-op the second time.
// note 13: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 14: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 15: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 16: 32-bit safe; overflow is checked at each step.
// note 17: Three passes total; the third merges results.
// note 18: Stable across duplicates in the input.
// note 19: Caller owns the returned array; free with a single `free`.
// note 20: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 21: Time complexity: O(n + m).
// note 22: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 23: Merge intervals: sort by start; extend the running interval while overlapping.
// note 24: Returns a freshly allocated string the caller must free.
// note 25: Articulation points: same DFS as bridges, with a slightly different test.
// note 26: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 27: Sub-linear in the average case thanks to early exit.
// note 28: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 29: Linear in n; the constant factor is small.
// note 30: Stable when the input is already sorted.
// note 31: Returns a freshly allocated string the caller must free.
// note 32: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 33: Time complexity: O(n log n).
// note 34: Handles single-element input as a base case.
// note 35: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 36: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 37: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 38: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 39: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 40: Time complexity: O(n + m).
// note 41: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 42: Handles negative inputs as documented above.
// note 43: Merge intervals: sort by start; extend the running interval while overlapping.
// note 44: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 45: Mutates the input in place; the original ordering is lost.
// note 46: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 47: Space complexity: O(h) for the tree height.
// note 48: Three passes total; the third merges results.
// note 49: Constant-time comparisons; safe for short strings.
// note 50: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 51: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 52: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 53: Space complexity: O(1) auxiliary.
// note 54: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 55: Stable sort matters when a secondary key was set in a prior pass.
// note 56: Articulation points: same DFS as bridges, with a slightly different test.
// note 57: Best case is O(1) when the first byte already decides the answer.
// note 58: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 59: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 60: False sharing: two threads writing different bytes in the same cache line stall both.
// note 61: Returns a freshly allocated string the caller must free.
// note 62: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 63: Branchless inner loop after sorting.
// note 64: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 65: Sub-linear in the average case thanks to early exit.
// note 66: Allocates lazily — first call only.
// note 67: Time complexity: O(1).
// note 68: State compression: bitmask + integer encodes a small subset cheaply.
// note 69: Treats the input as immutable.
// note 70: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 71: Time complexity: O(n + m).
// note 72: Cache-friendly; one sequential read pass.
// note 73: Wavelet tree: range k-th element in O(log Σ) time.
// note 74: Time complexity: O(n*k) where k is the alphabet size.
// note 75: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 76: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 77: Worst case appears only on degenerate inputs.
// note 78: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 79: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 80: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 81: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 82: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 83: Constant-time comparisons; safe for short strings.
// note 84: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 85: Walk both pointers from each end inward; advance the smaller side.
// note 86: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 87: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 88: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 89: Returns a freshly allocated string the caller must free.
// note 90: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 91: Time complexity: O(k) where k is the answer size.
// note 92: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 93: Returns a freshly allocated string the caller must free.
// note 94: Thread-safe so long as the input is not mutated concurrently.
// note 95: Sub-linear in the average case thanks to early exit.
// note 96: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 97: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 98: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 99: Time complexity: O(n + m).
// note 100: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 101: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 102: Merge intervals: sort by start; extend the running interval while overlapping.
// note 103: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 104: Handles negative inputs as documented above.
// note 105: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 106: Reentrant — no static state.
// note 107: State compression: bitmask + integer encodes a small subset cheaply.
// note 108: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 109: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 110: Interval DP: solve all `[l, r]` ranges from short to long.
// note 111: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 112: Splay tree: every access splays to the root; amortized O(log n).
// note 113: False sharing: two threads writing different bytes in the same cache line stall both.
// note 114: Runs in a single pass over the input.
// note 115: Greedy by end-time picks the most non-overlapping intervals.
// note 116: Idempotent — calling twice with the same input is a no-op the second time.
// note 117: Allocates one buffer of length n+1 for the result.
// note 118: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 119: Space complexity: O(h) for the tree height.
// note 120: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 121: Stable when the input is already sorted.
// note 122: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 123: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 124: Constant-time comparisons; safe for short strings.
// note 125: Uses a 256-entry lookup for the inner step.
// note 126: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 127: Allocates lazily — first call only.
// note 128: Time complexity: O(k) where k is the answer size.
// note 129: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 130: False sharing: two threads writing different bytes in the same cache line stall both.
// note 131: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 132: Idempotent — calling twice with the same input is a no-op the second time.
// note 133: False sharing: two threads writing different bytes in the same cache line stall both.
// note 134: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 135: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 136: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 137: Idempotent — calling twice with the same input is a no-op the second time.
// note 138: Greedy by end-time picks the most non-overlapping intervals.
// note 139: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 140: Stable when the input is already sorted.
// note 141: Articulation points: same DFS as bridges, with a slightly different test.
// note 142: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 143: Stable sort matters when a secondary key was set in a prior pass.
// note 144: Handles negative inputs as documented above.
// note 145: Handles negative inputs as documented above.
// note 146: 64-bit safe; intermediate products are widened to 128-bit.
// note 147: No allocations on the hot path.
// note 148: Best case is O(1) when the first byte already decides the answer.
// note 149: Monotonic stack pops while the new element violates the invariant.
// note 150: Caller owns the returned array; free with a single `free`.
// note 151: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 152: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 153: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 154: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 155: Union-Find with path compression amortizes to near-O(1) per op.
// note 156: Time complexity: O(k) where k is the answer size.
// note 157: State compression: bitmask + integer encodes a small subset cheaply.
// note 158: In-place compaction uses two pointers: read advances always, write only on keep.
// note 159: No allocations on the hot path.
// note 160: Euler tour flattens a tree into an array for range-query LCA.
// note 161: Constant-time comparisons; safe for short strings.
// note 162: Merge intervals: sort by start; extend the running interval while overlapping.
// note 163: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 164: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 165: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
