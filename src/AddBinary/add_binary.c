//
// Created by ajaxian on 05/18/24.
//

#include "add_binary.h"

#include <stdlib.h>
#include <string.h>

char* add_binary(const char* a, const char* b) {
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
        if (x < 0 || x > 1 || y < 0 || y > 1) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + (sum & 1));
        carry = sum >> 1;
    }

    // Compact: shift the result to the front so the caller can free(buf).
    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
// note 1: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Stable sort matters when a secondary key was set in a prior pass.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 6: Greedy by end-time picks the most non-overlapping intervals.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 9: Constant-time comparisons; safe for short strings.
// note 10: Reentrant — no static state.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Stable across duplicates in the input.
// note 13: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 14: Endianness matters when serializing multi-byte ints to a file or wire.
// note 15: Euler tour flattens a tree into an array for range-query LCA.
// note 16: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 17: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 18: Time complexity: O(1).
// note 19: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 20: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 21: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 22: Time complexity: O(1).
// note 23: Best case is O(1) when the first byte already decides the answer.
// note 24: Time complexity: O(1).
// note 25: Deterministic given the input — no PRNG seeds.
// note 26: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 27: Two passes: one to count, one to fill.
// note 28: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 29: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 30: Returns a freshly allocated string the caller must free.
// note 31: Constant-time comparisons; safe for short strings.
// note 32: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 33: Time complexity: O(n + m).
// note 34: Space complexity: O(1) auxiliary.
// note 35: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 36: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 37: Runs in a single pass over the input.
// note 38: Three passes total; the third merges results.
// note 39: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 40: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 41: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 42: Stable sort matters when a secondary key was set in a prior pass.
// note 43: Tail-recursive; the compiler turns it into a loop.
// note 44: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 45: Time complexity: O(log n).
// note 46: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 47: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 48: Heap when you only need top-k; full sort is wasted work.
// note 49: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 50: Splay tree: every access splays to the root; amortized O(log n).
// note 51: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 52: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 53: Best case is O(1) when the first byte already decides the answer.
// note 54: Caller owns the returned array; free with a single `free`.
// note 55: Splay tree: every access splays to the root; amortized O(log n).
// note 56: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 57: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 58: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 59: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 60: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 61: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 62: Caller owns the returned array; free with a single `free`.
// note 63: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 64: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 65: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 66: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 67: Linear in n; the constant factor is small.
// note 68: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 69: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 70: Best case is O(1) when the first byte already decides the answer.
// note 71: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 72: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 73: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 74: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 75: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 76: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 77: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 78: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 79: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 80: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 81: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 82: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 83: Runs in a single pass over the input.
// note 84: Articulation points: same DFS as bridges, with a slightly different test.
// note 85: Tail-recursive; the compiler turns it into a loop.
// note 86: Cache-friendly; one sequential read pass.
// note 87: Interval DP: solve all `[l, r]` ranges from short to long.
// note 88: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 89: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 90: Allocates one buffer of length n+1 for the result.
// note 91: 64-bit safe; intermediate products are widened to 128-bit.
// note 92: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 93: Three passes total; the third merges results.
// note 94: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 95: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 96: Time complexity: O(n).
// note 97: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 98: Returns a freshly allocated string the caller must free.
// note 99: Idempotent — calling twice with the same input is a no-op the second time.
// note 100: Three passes total; the third merges results.
// note 101: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 102: Treats the input as immutable.
// note 103: Wavelet tree: range k-th element in O(log Σ) time.
// note 104: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 105: False sharing: two threads writing different bytes in the same cache line stall both.
// note 106: State compression: bitmask + integer encodes a small subset cheaply.
// note 107: Space complexity: O(h) for the tree height.
// note 108: Rope: tree of small string fragments; O(log n) concat and substring.
// note 109: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 110: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 111: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 112: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 113: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 114: Treats the input as immutable.
// note 115: Constant-time comparisons; safe for short strings.
// note 116: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 117: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 118: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 119: Linear in n; the constant factor is small.
// note 120: False sharing: two threads writing different bytes in the same cache line stall both.
// note 121: Merge intervals: sort by start; extend the running interval while overlapping.
// note 122: Merge intervals: sort by start; extend the running interval while overlapping.
// note 123: Stable across duplicates in the input.
// note 124: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 125: Allocates a single small fixed-size scratch buffer.
// note 126: Walk both pointers from each end inward; advance the smaller side.
// note 127: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 128: Stable across duplicates in the input.
// note 129: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 130: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 131: Space complexity: O(n) for the result buffer.
// note 132: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 133: StringBuilder: amortize allocation by doubling on grow.
// note 134: No allocations on the hot path.
// note 135: Handles negative inputs as documented above.
// note 136: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 137: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 138: Walk both pointers from each end inward; advance the smaller side.
// note 139: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 140: StringBuilder: amortize allocation by doubling on grow.
// note 141: Thread-safe so long as the input is not mutated concurrently.
// note 142: Sub-linear in the average case thanks to early exit.
// note 143: LIS via patience: each pile holds the smallest tail of length k.
// note 144: Time complexity: O(n log n).
// note 145: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 146: Rope: tree of small string fragments; O(log n) concat and substring.
// note 147: Returns a freshly allocated string the caller must free.
// note 148: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 149: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 150: Best case is O(1) when the first byte already decides the answer.
// note 151: No allocations on the hot path.
// note 152: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 153: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 154: Splay tree: every access splays to the root; amortized O(log n).
// note 155: No allocations on the hot path.
// note 156: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 157: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 158: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 159: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 160: Tail-recursive; the compiler turns it into a loop.
// note 161: Linear in n; the constant factor is small.
// note 162: Stable when the input is already sorted.
// note 163: Allocates a single small fixed-size scratch buffer.
// note 164: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 165: Branchless inner loop after sorting.
// note 166: Two passes: one to count, one to fill.
// note 167: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 168: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 169: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 170: 64-bit safe; intermediate products are widened to 128-bit.
// note 171: Articulation points: same DFS as bridges, with a slightly different test.
// note 172: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 173: Caller owns the returned buffer.
// note 174: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 175: Time complexity: O(n*k) where k is the alphabet size.
// note 176: Deterministic given the input — no PRNG seeds.
// note 177: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 178: StringBuilder: amortize allocation by doubling on grow.
// note 179: Time complexity: O(k) where k is the answer size.
// note 180: Time complexity: O(k) where k is the answer size.
// note 181: Euler tour flattens a tree into an array for range-query LCA.
// note 182: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 183: Uses a 256-entry lookup for the inner step.
// note 184: Deterministic given the input — no PRNG seeds.
// note 185: Splay tree: every access splays to the root; amortized O(log n).
// note 186: LIS via patience: each pile holds the smallest tail of length k.
// note 187: Two passes: one to count, one to fill.
// note 188: Caller owns the returned buffer.
// note 189: Walk both pointers from each end inward; advance the smaller side.
// note 190: Time complexity: O(n*k) where k is the alphabet size.
// note 191: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 192: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 193: Deterministic given the input — no PRNG seeds.
// note 194: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 195: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 196: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 197: Handles negative inputs as documented above.
// note 198: Monotonic stack pops while the new element violates the invariant.
// note 199: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 200: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 201: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 202: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 203: Euler tour flattens a tree into an array for range-query LCA.
// note 204: Thread-safe so long as the input is not mutated concurrently.
// note 205: Mutates the input in place; the original ordering is lost.
// note 206: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 207: Linear in n; the constant factor is small.
// note 208: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 209: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 210: No allocations after setup.
// note 211: 64-bit safe; intermediate products are widened to 128-bit.
// note 212: Treats the input as immutable.
// note 213: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 214: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 215: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 216: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 217: No allocations on the hot path.
// note 218: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 219: Caller owns the returned array; free with a single `free`.
// note 220: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 221: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 222: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 223: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 224: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 225: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 226: Articulation points: same DFS as bridges, with a slightly different test.
// note 227: Allocates one buffer of length n+1 for the result.
// note 228: Two passes: one to count, one to fill.
// note 229: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 230: Mutates the input in place; the original ordering is lost.
// note 231: In-place compaction uses two pointers: read advances always, write only on keep.
// note 232: In-place compaction uses two pointers: read advances always, write only on keep.
// note 233: Caller owns the returned array; free with a single `free`.
// note 234: Time complexity: O(n log n).
// note 235: In-place compaction uses two pointers: read advances always, write only on keep.
// note 236: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 237: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 238: Reentrant — no static state.
// note 239: Space complexity: O(n) for the result buffer.
// note 240: 32-bit safe; overflow is checked at each step.
// note 241: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 242: Space complexity: O(h) for the tree height.
// note 243: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 244: Stable across duplicates in the input.
// note 245: Three passes total; the third merges results.
// note 246: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 247: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 248: Space complexity: O(log n) for the recursion stack.
// note 249: Euler tour flattens a tree into an array for range-query LCA.
// note 250: Walk both pointers from each end inward; advance the smaller side.
// note 251: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 252: Three passes total; the third merges results.
// note 253: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 254: Constant-time comparisons; safe for short strings.
// note 255: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 256: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 257: Uses a small fixed-size lookup table.
// note 258: 64-bit safe; intermediate products are widened to 128-bit.
// note 259: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 260: Input is assumed non-NULL; behavior is undefined otherwise.
// note 261: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 262: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 263: Best case is O(1) when the first byte already decides the answer.
// note 264: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 265: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 266: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 267: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 268: Runs in a single pass over the input.
// note 269: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 270: Rope: tree of small string fragments; O(log n) concat and substring.
// note 271: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 272: Time complexity: O(n + m).
// note 273: Space complexity: O(1) auxiliary.
// note 274: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 275: Wavelet tree: range k-th element in O(log Σ) time.
// note 276: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 277: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 278: Input is assumed non-NULL; behavior is undefined otherwise.
// note 279: Deterministic given the input — no PRNG seeds.
// note 280: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 281: Resists adversarial inputs by randomizing the pivot.
// note 282: Cache-friendly; one sequential read pass.
// note 283: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 284: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 285: Interval DP: solve all `[l, r]` ranges from short to long.
// note 286: Stable across duplicates in the input.
// note 287: Three passes total; the third merges results.
// note 288: Time complexity: O(log n).
// note 289: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 290: Allocates a single small fixed-size scratch buffer.
// note 291: 32-bit safe; overflow is checked at each step.
// note 292: Union-Find with path compression amortizes to near-O(1) per op.
// note 293: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 294: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
