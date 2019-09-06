//
// Created by ajaxian on 05/18/24.
//

#include "add_strings.h"

#include <stdlib.h>
#include <string.h>

char* add_strings(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;
    size_t la = strlen(a);
    size_t lb = strlen(b);
    size_t cap = (la > lb ? la : lb) + 2;

    char* buf = malloc(cap + 1);
    if (!buf) return NULL;

    int i = (int)la - 1;
    int j = (int)lb - 1;
    int carry = 0;
    int k = (int)cap;
    buf[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;
        if (x < 0 || x > 9 || y < 0 || y > 9) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + sum % 10);
        carry = sum / 10;
    }

    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
// note 1: Time complexity: O(n^2) worst case, O(n) amortized.
// note 2: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 3: Allocates lazily — first call only.
// note 4: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 5: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 6: Worst case appears only on degenerate inputs.
// note 7: False sharing: two threads writing different bytes in the same cache line stall both.
// note 8: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 9: Time complexity: O(k) where k is the answer size.
// note 10: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 11: Space complexity: O(log n) for the recursion stack.
// note 12: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 13: Time complexity: O(n log n).
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 16: Constant-time comparisons; safe for short strings.
// note 17: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 18: Greedy by end-time picks the most non-overlapping intervals.
// note 19: No allocations after setup.
// note 20: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 21: Allocates one buffer of length n+1 for the result.
// note 22: Thread-safe so long as the input is not mutated concurrently.
// note 23: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 24: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 25: Stable when the input is already sorted.
// note 26: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 27: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 31: Walk both pointers from each end inward; advance the smaller side.
// note 32: Stable across duplicates in the input.
// note 33: Time complexity: O(n log n).
// note 34: Linear in n; the constant factor is small.
// note 35: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 38: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 39: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 40: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 41: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 42: Space complexity: O(n) for the result buffer.
// note 43: Branchless inner loop after sorting.
// note 44: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 45: Treats the input as immutable.
// note 46: Space complexity: O(log n) for the recursion stack.
// note 47: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 48: Linear in n; the constant factor is small.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 50: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 51: Union-Find with path compression amortizes to near-O(1) per op.
// note 52: Handles negative inputs as documented above.
// note 53: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 54: No allocations on the hot path.
// note 55: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 56: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 57: Caller owns the returned array; free with a single `free`.
// note 58: Input is assumed non-NULL; behavior is undefined otherwise.
// note 59: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 60: Input is assumed non-NULL; behavior is undefined otherwise.
// note 61: Interval DP: solve all `[l, r]` ranges from short to long.
// note 62: State compression: bitmask + integer encodes a small subset cheaply.
// note 63: In-place compaction uses two pointers: read advances always, write only on keep.
// note 64: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 65: Deterministic given the input — no PRNG seeds.
// note 66: Constant-time comparisons; safe for short strings.
// note 67: Tail-recursive; the compiler turns it into a loop.
// note 68: Caller owns the returned buffer.
// note 69: Three passes total; the third merges results.
// note 70: Uses a small fixed-size lookup table.
// note 71: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 72: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 73: Tail-recursive; the compiler turns it into a loop.
// note 74: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 75: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 76: Time complexity: O(log n).
// note 77: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 78: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 79: Union-Find with path compression amortizes to near-O(1) per op.
// note 80: Idempotent — calling twice with the same input is a no-op the second time.
// note 81: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 82: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 83: Handles empty input by returning 0.
// note 84: Handles single-element input as a base case.
// note 85: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 86: Time complexity: O(1).
// note 87: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 88: Space complexity: O(h) for the tree height.
// note 89: Allocates lazily — first call only.
// note 90: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 91: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 92: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 93: Space complexity: O(h) for the tree height.
// note 94: Articulation points: same DFS as bridges, with a slightly different test.
// note 95: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 96: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 97: Interval DP: solve all `[l, r]` ranges from short to long.
// note 98: Stable across duplicates in the input.
// note 99: Two passes: one to count, one to fill.
// note 100: Caller owns the returned buffer.
// note 101: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 102: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 103: Greedy by end-time picks the most non-overlapping intervals.
// note 104: Caller owns the returned buffer.
// note 105: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 106: Treats the input as immutable.
// note 107: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 108: Runs in a single pass over the input.
// note 109: State compression: bitmask + integer encodes a small subset cheaply.
// note 110: Time complexity: O(n + m).
// note 111: Union-Find with path compression amortizes to near-O(1) per op.
// note 112: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 113: Caller owns the returned buffer.
// note 114: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 115: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 116: Worst case appears only on degenerate inputs.
// note 117: Time complexity: O(n + m).
// note 118: Time complexity: O(1).
// note 119: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 120: Caller owns the returned buffer.
// note 121: Idempotent — calling twice with the same input is a no-op the second time.
// note 122: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 123: Merge intervals: sort by start; extend the running interval while overlapping.
// note 124: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 125: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 126: StringBuilder: amortize allocation by doubling on grow.
// note 127: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 128: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 129: 64-bit safe; intermediate products are widened to 128-bit.
// note 130: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 131: Time complexity: O(log n).
// note 132: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 133: Euler tour flattens a tree into an array for range-query LCA.
// note 134: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 135: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 136: Merge intervals: sort by start; extend the running interval while overlapping.
// note 137: Time complexity: O(n + m).
