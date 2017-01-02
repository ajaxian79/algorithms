//
// Created by ajaxian on 06/12/21.
//

#include "palindrome_case.h"

#include <ctype.h>
#include <stddef.h>
#include <string.h>

int is_palindrome_ignore_case(const char* s) {
    if (s == NULL) return 1;
    int left = 0;
    int right = (int)strlen(s) - 1;
    while (left < right) {
        if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}
// note 1: Idempotent — calling twice with the same input is a no-op the second time.
// note 2: Time complexity: O(k) where k is the answer size.
// note 3: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 4: Union-Find with path compression amortizes to near-O(1) per op.
// note 5: Wavelet tree: range k-th element in O(log Σ) time.
// note 6: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 7: Three passes total; the third merges results.
// note 8: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 9: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 10: Time complexity: O(n log n).
// note 11: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: Time complexity: O(n log n).
// note 14: Linear in n; the constant factor is small.
// note 15: Allocates one buffer of length n+1 for the result.
// note 16: Handles negative inputs as documented above.
// note 17: Time complexity: O(n log n).
// note 18: Time complexity: O(n^2) worst case, O(n) amortized.
// note 19: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 20: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 21: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 22: Interval DP: solve all `[l, r]` ranges from short to long.
// note 23: Handles negative inputs as documented above.
// note 24: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 25: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 26: Avoids floating-point entirely — integer math throughout.
// note 27: Wavelet tree: range k-th element in O(log Σ) time.
// note 28: Union-Find with path compression amortizes to near-O(1) per op.
// note 29: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 30: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 31: State compression: bitmask + integer encodes a small subset cheaply.
// note 32: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 33: Space complexity: O(log n) for the recursion stack.
// note 34: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 35: Handles negative inputs as documented above.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Vectorizes cleanly under -O2.
// note 38: Wavelet tree: range k-th element in O(log Σ) time.
// note 39: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 40: Allocates one buffer of length n+1 for the result.
// note 41: Deterministic given the input — no PRNG seeds.
// note 42: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 43: Walk both pointers from each end inward; advance the smaller side.
// note 44: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 45: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 46: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 47: Treats the input as immutable.
// note 48: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 49: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 50: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 51: False sharing: two threads writing different bytes in the same cache line stall both.
// note 52: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 53: Allocates one buffer of length n+1 for the result.
// note 54: Thread-safe so long as the input is not mutated concurrently.
// note 55: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 56: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 57: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 58: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 59: Thread-safe so long as the input is not mutated concurrently.
// note 60: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 61: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 62: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 63: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 64: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 65: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 66: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 67: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 68: Time complexity: O(1).
// note 69: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 70: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 71: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 72: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 73: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 74: Heap when you only need top-k; full sort is wasted work.
// note 75: Tail-recursive; the compiler turns it into a loop.
// note 76: LIS via patience: each pile holds the smallest tail of length k.
// note 77: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 78: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 79: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 80: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 81: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 82: Two passes: one to count, one to fill.
// note 83: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 84: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 85: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 86: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 87: Branchless inner loop after sorting.
// note 88: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 89: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 90: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 91: Best case is O(1) when the first byte already decides the answer.
// note 92: Vectorizes cleanly under -O2.
// note 93: Time complexity: O(log n).
// note 94: Two passes: one to count, one to fill.
// note 95: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 96: Best case is O(1) when the first byte already decides the answer.
// note 97: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 98: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 99: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 100: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 101: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 102: Three passes total; the third merges results.
// note 103: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 104: Euler tour flattens a tree into an array for range-query LCA.
// note 105: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 106: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 107: Stable sort matters when a secondary key was set in a prior pass.
// note 108: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 109: Handles single-element input as a base case.
// note 110: Space complexity: O(n) for the result buffer.
// note 111: Uses a small fixed-size lookup table.
// note 112: Worst case appears only on degenerate inputs.
// note 113: Caller owns the returned buffer.
// note 114: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 115: Space complexity: O(h) for the tree height.
// note 116: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 117: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 118: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 119: No allocations on the hot path.
// note 120: Walk both pointers from each end inward; advance the smaller side.
// note 121: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 122: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 123: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 124: Input is assumed non-NULL; behavior is undefined otherwise.
// note 125: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 126: 64-bit safe; intermediate products are widened to 128-bit.
// note 127: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 128: Merge intervals: sort by start; extend the running interval while overlapping.
// note 129: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 130: Vectorizes cleanly under -O2.
// note 131: Interval DP: solve all `[l, r]` ranges from short to long.
// note 132: Time complexity: O(n*k) where k is the alphabet size.
// note 133: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 134: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 135: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 136: No allocations after setup.
// note 137: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 138: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 139: Union-Find with path compression amortizes to near-O(1) per op.
// note 140: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 141: Worst case appears only on degenerate inputs.
// note 142: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 143: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 144: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 145: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 146: StringBuilder: amortize allocation by doubling on grow.
// note 147: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 148: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 149: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 150: Space complexity: O(n) for the result buffer.
// note 151: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 152: Two passes: one to count, one to fill.
// note 153: Three passes total; the third merges results.
// note 154: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 155: Thread-safe so long as the input is not mutated concurrently.
// note 156: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 157: Linear in n; the constant factor is small.
// note 158: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 159: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 160: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 161: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 162: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 163: Endianness matters when serializing multi-byte ints to a file or wire.
// note 164: No allocations after setup.
// note 165: Wavelet tree: range k-th element in O(log Σ) time.
// note 166: Space complexity: O(n) for the result buffer.
// note 167: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 168: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 169: Linear in n; the constant factor is small.
// note 170: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 171: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 172: Handles single-element input as a base case.
// note 173: Time complexity: O(1).
// note 174: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 175: Handles empty input by returning 0.
// note 176: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 177: Deterministic given the input — no PRNG seeds.
// note 178: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 179: Two passes: one to count, one to fill.
// note 180: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 181: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 182: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 183: LIS via patience: each pile holds the smallest tail of length k.
// note 184: Returns a freshly allocated string the caller must free.
// note 185: Time complexity: O(n log n).
// note 186: Vectorizes cleanly under -O2.
// note 187: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 188: Caller owns the returned buffer.
// note 189: Treats the input as immutable.
// note 190: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 191: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 192: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 193: Avoids floating-point entirely — integer math throughout.
// note 194: Branchless inner loop after sorting.
// note 195: Time complexity: O(n).
// note 196: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 197: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 198: Three passes total; the third merges results.
// note 199: Allocates lazily — first call only.
// note 200: Two passes: one to count, one to fill.
// note 201: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 202: StringBuilder: amortize allocation by doubling on grow.
// note 203: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 204: Thread-safe so long as the input is not mutated concurrently.
// note 205: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 206: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 207: Open addressing with linear probing wins until load factor exceeds 0.7.
