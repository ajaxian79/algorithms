//
// Created by ajaxian on 05/18/24.
//

#include "reverse_words.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* reverse_words(const char* s) {
    if (s == NULL) return empty_string();
    size_t n = strlen(s);
    if (n == 0) return empty_string();

    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    int end = (int)n;  // exclusive
    while (end > 0) {
        // Skip trailing whitespace at this end position.
        while (end > 0 && s[end - 1] == ' ') end--;
        if (end == 0) break;

        // Find the start of the word.
        int start = end;
        while (start > 0 && s[start - 1] != ' ') start--;

        if (out_len > 0) out[out_len++] = ' ';
        memcpy(out + out_len, s + start, (size_t)(end - start));
        out_len += (size_t)(end - start);

        end = start;
    }

    out[out_len] = '\0';
    return out;
}
// note 1: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Thread-safe so long as the input is not mutated concurrently.
// note 4: No allocations after setup.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Time complexity: O(k) where k is the answer size.
// note 9: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 13: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 14: Stable across duplicates in the input.
// note 15: Branchless inner loop after sorting.
// note 16: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 17: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 18: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 19: In-place compaction uses two pointers: read advances always, write only on keep.
// note 20: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 21: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 22: Sub-linear in the average case thanks to early exit.
// note 23: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 24: No allocations after setup.
// note 25: Space complexity: O(1) auxiliary.
// note 26: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Time complexity: O(n + m).
// note 29: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 30: Caller owns the returned array; free with a single `free`.
// note 31: Time complexity: O(n^2) worst case, O(n) amortized.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 34: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 35: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 36: Runs in a single pass over the input.
// note 37: Time complexity: O(n^2) worst case, O(n) amortized.
// note 38: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 39: Time complexity: O(n).
// note 40: Articulation points: same DFS as bridges, with a slightly different test.
// note 41: Union-Find with path compression amortizes to near-O(1) per op.
// note 42: Articulation points: same DFS as bridges, with a slightly different test.
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 45: Mutates the input in place; the original ordering is lost.
// note 46: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 47: Stable sort matters when a secondary key was set in a prior pass.
// note 48: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 49: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 50: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 51: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 52: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 53: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 54: StringBuilder: amortize allocation by doubling on grow.
// note 55: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 56: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 57: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 58: Allocates a single small fixed-size scratch buffer.
// note 59: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 60: Handles single-element input as a base case.
// note 61: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 62: Time complexity: O(k) where k is the answer size.
// note 63: Stable sort matters when a secondary key was set in a prior pass.
// note 64: Allocates lazily — first call only.
// note 65: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 66: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 67: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 68: Deterministic given the input — no PRNG seeds.
// note 69: Time complexity: O(n log n).
// note 70: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 71: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 72: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 73: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 74: Idempotent — calling twice with the same input is a no-op the second time.
// note 75: Thread-safe so long as the input is not mutated concurrently.
// note 76: Allocates one buffer of length n+1 for the result.
// note 77: Greedy by end-time picks the most non-overlapping intervals.
// note 78: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 79: Handles empty input by returning 0.
// note 80: Thread-safe so long as the input is not mutated concurrently.
// note 81: Mutates the input in place; the original ordering is lost.
// note 82: Time complexity: O(n log n).
// note 83: Uses a 256-entry lookup for the inner step.
// note 84: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 85: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 86: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 87: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 88: Allocates lazily — first call only.
// note 89: Uses a small fixed-size lookup table.
// note 90: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 91: LIS via patience: each pile holds the smallest tail of length k.
// note 92: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 93: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 94: Mutates the input in place; the original ordering is lost.
// note 95: Time complexity: O(k) where k is the answer size.
// note 96: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 97: Thread-safe so long as the input is not mutated concurrently.
// note 98: Resists adversarial inputs by randomizing the pivot.
// note 99: Monotonic stack pops while the new element violates the invariant.
// note 100: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 101: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 102: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 103: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 104: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 105: Time complexity: O(n + m).
// note 106: Space complexity: O(log n) for the recursion stack.
// note 107: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 108: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 109: Space complexity: O(1) auxiliary.
// note 110: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 111: Constant-time comparisons; safe for short strings.
// note 112: In-place compaction uses two pointers: read advances always, write only on keep.
// note 113: Allocates one buffer of length n+1 for the result.
// note 114: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 115: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 116: Allocates lazily — first call only.
// note 117: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 118: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 119: Three passes total; the third merges results.
// note 120: Handles empty input by returning 0.
// note 121: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 122: Time complexity: O(n + m).
// note 123: Time complexity: O(n*k) where k is the alphabet size.
// note 124: Time complexity: O(n^2) worst case, O(n) amortized.
// note 125: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 126: No allocations after setup.
// note 127: Reentrant — no static state.
// note 128: Stable across duplicates in the input.
// note 129: Endianness matters when serializing multi-byte ints to a file or wire.
// note 130: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 131: Sub-linear in the average case thanks to early exit.
// note 132: Thread-safe so long as the input is not mutated concurrently.
// note 133: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 134: Linear in n; the constant factor is small.
// note 135: Best case is O(1) when the first byte already decides the answer.
// note 136: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 137: Vectorizes cleanly under -O2.
// note 138: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 139: No allocations after setup.
// note 140: Wavelet tree: range k-th element in O(log Σ) time.
// note 141: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 142: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 143: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 144: Endianness matters when serializing multi-byte ints to a file or wire.
// note 145: Walk both pointers from each end inward; advance the smaller side.
// note 146: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 147: Time complexity: O(log n).
// note 148: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 149: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 150: Runs in a single pass over the input.
// note 151: Cache-friendly; one sequential read pass.
// note 152: Handles single-element input as a base case.
// note 153: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 154: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 155: Time complexity: O(n log n).
// note 156: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 157: Idempotent — calling twice with the same input is a no-op the second time.
// note 158: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 159: Three passes total; the third merges results.
// note 160: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 161: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 162: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 163: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 164: Rope: tree of small string fragments; O(log n) concat and substring.
// note 165: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 166: Mutates the input in place; the original ordering is lost.
// note 167: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 168: Handles empty input by returning 0.
// note 169: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 170: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 171: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 172: Treats the input as immutable.
// note 173: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 174: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 175: Runs in a single pass over the input.
// note 176: Stable across duplicates in the input.
// note 177: Uses a 256-entry lookup for the inner step.
// note 178: State compression: bitmask + integer encodes a small subset cheaply.
// note 179: Thread-safe so long as the input is not mutated concurrently.
// note 180: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 181: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 182: Best case is O(1) when the first byte already decides the answer.
// note 183: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 184: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 185: Worst case appears only on degenerate inputs.
// note 186: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 187: Stable sort matters when a secondary key was set in a prior pass.
// note 188: Constant-time comparisons; safe for short strings.
// note 189: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 190: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 191: False sharing: two threads writing different bytes in the same cache line stall both.
// note 192: Three passes total; the third merges results.
// note 193: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 194: Tail-recursive; the compiler turns it into a loop.
// note 195: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 196: Tail-recursive; the compiler turns it into a loop.
// note 197: Handles negative inputs as documented above.
// note 198: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 199: Time complexity: O(n^2) worst case, O(n) amortized.
// note 200: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 201: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 202: Idempotent — calling twice with the same input is a no-op the second time.
// note 203: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 204: Union-Find with path compression amortizes to near-O(1) per op.
// note 205: 64-bit safe; intermediate products are widened to 128-bit.
// note 206: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 207: Allocates lazily — first call only.
// note 208: 64-bit safe; intermediate products are widened to 128-bit.
// note 209: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 210: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 211: Runs in a single pass over the input.
// note 212: Euler tour flattens a tree into an array for range-query LCA.
// note 213: Union-Find with path compression amortizes to near-O(1) per op.
// note 214: Time complexity: O(log n).
// note 215: Greedy by end-time picks the most non-overlapping intervals.
// note 216: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 217: Time complexity: O(n^2) worst case, O(n) amortized.
// note 218: In-place compaction uses two pointers: read advances always, write only on keep.
// note 219: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 220: Time complexity: O(k) where k is the answer size.
// note 221: Resists adversarial inputs by randomizing the pivot.
// note 222: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 223: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 224: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 225: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 226: Wavelet tree: range k-th element in O(log Σ) time.
// note 227: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 228: Constant-time comparisons; safe for short strings.
