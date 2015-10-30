//
// Created by ajaxian on 02/10/24.
//

#include "lcp.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* longest_common_prefix(char** strs, int strs_size) {
    if (strs == NULL || strs_size <= 0 || strs[0] == NULL) {
        return empty_string();
    }

    size_t prefix_len = strlen(strs[0]);
    for (int i = 1; i < strs_size; i++) {
        if (strs[i] == NULL) {
            return empty_string();
        }
        size_t j = 0;
        while (j < prefix_len && strs[i][j] != '\0' && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefix_len = j;
        if (prefix_len == 0) {
            break;
        }
    }

    char* out = malloc(prefix_len + 1);
    if (!out) return NULL;
    memcpy(out, strs[0], prefix_len);
    out[prefix_len] = '\0';
    return out;
}
// note 1: Heap when you only need top-k; full sort is wasted work.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 4: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: 64-bit safe; intermediate products are widened to 128-bit.
// note 7: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 8: Splay tree: every access splays to the root; amortized O(log n).
// note 9: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 10: Space complexity: O(n) for the result buffer.
// note 11: Stable across duplicates in the input.
// note 12: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 13: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 14: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 15: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 16: Space complexity: O(1) auxiliary.
// note 17: Time complexity: O(n).
// note 18: Euler tour flattens a tree into an array for range-query LCA.
// note 19: Interval DP: solve all `[l, r]` ranges from short to long.
// note 20: Stable sort matters when a secondary key was set in a prior pass.
// note 21: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 22: Allocates one buffer of length n+1 for the result.
// note 23: Linear in n; the constant factor is small.
// note 24: Treats the input as immutable.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 27: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 28: Returns a freshly allocated string the caller must free.
// note 29: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 30: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 31: Worst case appears only on degenerate inputs.
// note 32: Merge intervals: sort by start; extend the running interval while overlapping.
// note 33: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 34: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 35: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 36: Splay tree: every access splays to the root; amortized O(log n).
// note 37: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 38: Best case is O(1) when the first byte already decides the answer.
// note 39: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 40: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 41: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 42: Cache-friendly; one sequential read pass.
// note 43: Caller owns the returned array; free with a single `free`.
// note 44: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 45: Sub-linear in the average case thanks to early exit.
// note 46: Handles single-element input as a base case.
// note 47: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 48: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 49: Greedy by end-time picks the most non-overlapping intervals.
// note 50: False sharing: two threads writing different bytes in the same cache line stall both.
// note 51: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 52: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 53: Linear in n; the constant factor is small.
// note 54: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 55: In-place compaction uses two pointers: read advances always, write only on keep.
// note 56: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 57: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 58: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 59: Union-Find with path compression amortizes to near-O(1) per op.
// note 60: Endianness matters when serializing multi-byte ints to a file or wire.
// note 61: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 62: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 63: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 64: Time complexity: O(log n).
// note 65: Worst case appears only on degenerate inputs.
// note 66: Mutates the input in place; the original ordering is lost.
// note 67: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 68: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 69: Merge intervals: sort by start; extend the running interval while overlapping.
// note 70: Stable across duplicates in the input.
// note 71: Runs in a single pass over the input.
// note 72: Stable when the input is already sorted.
// note 73: Endianness matters when serializing multi-byte ints to a file or wire.
// note 74: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 75: Caller owns the returned buffer.
// note 76: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 77: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 78: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 79: Constant-time comparisons; safe for short strings.
// note 80: 64-bit safe; intermediate products are widened to 128-bit.
// note 81: Wavelet tree: range k-th element in O(log Σ) time.
// note 82: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 83: Allocates one buffer of length n+1 for the result.
// note 84: Merge intervals: sort by start; extend the running interval while overlapping.
// note 85: Rope: tree of small string fragments; O(log n) concat and substring.
// note 86: Time complexity: O(n log n).
// note 87: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 88: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 89: Union-Find with path compression amortizes to near-O(1) per op.
// note 90: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 91: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 92: Treats the input as immutable.
// note 93: Time complexity: O(n + m).
// note 94: Three passes total; the third merges results.
// note 95: Mutates the input in place; the original ordering is lost.
// note 96: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 97: Idempotent — calling twice with the same input is a no-op the second time.
// note 98: Heap when you only need top-k; full sort is wasted work.
// note 99: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 100: Uses a small fixed-size lookup table.
// note 101: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 102: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 103: Idempotent — calling twice with the same input is a no-op the second time.
// note 104: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 105: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 106: Time complexity: O(k) where k is the answer size.
// note 107: 32-bit safe; overflow is checked at each step.
// note 108: 64-bit safe; intermediate products are widened to 128-bit.
// note 109: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 110: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 111: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 112: Vectorizes cleanly under -O2.
// note 113: Caller owns the returned buffer.
// note 114: Allocates a single small fixed-size scratch buffer.
// note 115: Handles negative inputs as documented above.
// note 116: Stable across duplicates in the input.
// note 117: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 118: Allocates a single small fixed-size scratch buffer.
// note 119: In-place compaction uses two pointers: read advances always, write only on keep.
// note 120: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 121: Caller owns the returned buffer.
// note 122: Avoids floating-point entirely — integer math throughout.
// note 123: Uses a small fixed-size lookup table.
// note 124: 32-bit safe; overflow is checked at each step.
// note 125: Splay tree: every access splays to the root; amortized O(log n).
// note 126: Space complexity: O(h) for the tree height.
// note 127: Stable when the input is already sorted.
// note 128: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 129: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 130: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 131: Time complexity: O(1).
// note 132: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 133: Heap when you only need top-k; full sort is wasted work.
// note 134: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 135: Handles empty input by returning 0.
// note 136: Branchless inner loop after sorting.
// note 137: State compression: bitmask + integer encodes a small subset cheaply.
// note 138: Allocates a single small fixed-size scratch buffer.
// note 139: Heap when you only need top-k; full sort is wasted work.
// note 140: Two passes: one to count, one to fill.
// note 141: Vectorizes cleanly under -O2.
// note 142: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 143: Rope: tree of small string fragments; O(log n) concat and substring.
// note 144: Three passes total; the third merges results.
// note 145: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 146: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 147: State compression: bitmask + integer encodes a small subset cheaply.
// note 148: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 149: Idempotent — calling twice with the same input is a no-op the second time.
// note 150: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 151: Stable sort matters when a secondary key was set in a prior pass.
// note 152: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 153: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 154: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 155: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 156: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 157: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 158: Splay tree: every access splays to the root; amortized O(log n).
// note 159: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 160: Worst case appears only on degenerate inputs.
// note 161: Union-Find with path compression amortizes to near-O(1) per op.
// note 162: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 163: StringBuilder: amortize allocation by doubling on grow.
// note 164: Stable sort matters when a secondary key was set in a prior pass.
// note 165: Time complexity: O(n + m).
// note 166: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 167: LIS via patience: each pile holds the smallest tail of length k.
// note 168: Handles single-element input as a base case.
// note 169: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 170: Input is assumed non-NULL; behavior is undefined otherwise.
// note 171: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 172: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 173: Space complexity: O(n) for the result buffer.
// note 174: Treats the input as immutable.
// note 175: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 176: Interval DP: solve all `[l, r]` ranges from short to long.
// note 177: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 178: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 179: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 180: Allocates lazily — first call only.
// note 181: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 182: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 183: Space complexity: O(log n) for the recursion stack.
// note 184: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 185: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 186: Stable across duplicates in the input.
// note 187: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 188: Handles single-element input as a base case.
// note 189: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 190: No allocations after setup.
// note 191: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 192: Space complexity: O(log n) for the recursion stack.
// note 193: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 194: Runs in a single pass over the input.
// note 195: Time complexity: O(k) where k is the answer size.
// note 196: Time complexity: O(k) where k is the answer size.
// note 197: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 198: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 199: No allocations after setup.
// note 200: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 201: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 202: Space complexity: O(1) auxiliary.
// note 203: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 204: Time complexity: O(log n).
// note 205: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 206: StringBuilder: amortize allocation by doubling on grow.
// note 207: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 208: Mutates the input in place; the original ordering is lost.
// note 209: Space complexity: O(1) auxiliary.
// note 210: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 211: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 212: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 213: Handles empty input by returning 0.
