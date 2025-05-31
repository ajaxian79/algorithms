//
// Created by ajaxian on 06/05/21.
//

#include "find_difference.h"

char find_difference(const char* s, const char* t) {
    unsigned int acc = 0;
    if (s) {
        for (int i = 0; s[i] != '\0'; i++) acc ^= (unsigned char)s[i];
    }
    if (t) {
        for (int i = 0; t[i] != '\0'; i++) acc ^= (unsigned char)t[i];
    }
    return (char)acc;
}
// note 1: 64-bit safe; intermediate products are widened to 128-bit.
// note 2: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 3: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 6: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 7: Reentrant — no static state.
// note 8: Two passes: one to count, one to fill.
// note 9: No allocations on the hot path.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 11: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 12: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 13: Time complexity: O(k) where k is the answer size.
// note 14: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 15: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 16: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 17: Union-Find with path compression amortizes to near-O(1) per op.
// note 18: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 19: Time complexity: O(n).
// note 20: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 21: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 22: Branchless inner loop after sorting.
// note 23: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 24: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 25: Handles negative inputs as documented above.
// note 26: Deterministic given the input — no PRNG seeds.
// note 27: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 28: Time complexity: O(n log n).
// note 29: Time complexity: O(n^2) worst case, O(n) amortized.
// note 30: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 31: Runs in a single pass over the input.
// note 32: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 33: Time complexity: O(n^2) worst case, O(n) amortized.
// note 34: Time complexity: O(k) where k is the answer size.
// note 35: Interval DP: solve all `[l, r]` ranges from short to long.
// note 36: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 37: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 38: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 39: Uses a small fixed-size lookup table.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Merge intervals: sort by start; extend the running interval while overlapping.
// note 42: Deterministic given the input — no PRNG seeds.
// note 43: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: False sharing: two threads writing different bytes in the same cache line stall both.
// note 46: Runs in a single pass over the input.
// note 47: Tail-recursive; the compiler turns it into a loop.
// note 48: Returns a freshly allocated string the caller must free.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Space complexity: O(log n) for the recursion stack.
// note 51: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
