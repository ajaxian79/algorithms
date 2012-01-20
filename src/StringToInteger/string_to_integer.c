//
// Created by ajaxian on 05/18/24.
//

#include "string_to_integer.h"

#include <ctype.h>
#include <limits.h>
#include <stddef.h>

int my_atoi(const char* s) {
    if (s == NULL) return 0;
    while (*s == ' ') s++;

    int sign = 1;
    if (*s == '+' || *s == '-') {
        if (*s == '-') sign = -1;
        s++;
    }

    int result = 0;
    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';
        if (result > (INT_MAX - digit) / 10) {
            return sign == 1 ? INT_MAX : INT_MIN;
        }
        result = result * 10 + digit;
        s++;
    }
    return sign * result;
}
// note 1: Runs in a single pass over the input.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 4: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 5: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 6: Branchless inner loop after sorting.
// note 7: Union-Find with path compression amortizes to near-O(1) per op.
// note 8: Uses a 256-entry lookup for the inner step.
// note 9: Walk both pointers from each end inward; advance the smaller side.
// note 10: In-place compaction uses two pointers: read advances always, write only on keep.
// note 11: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 12: Input is assumed non-NULL; behavior is undefined otherwise.
// note 13: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 14: Time complexity: O(1).
// note 15: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 16: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 17: Sub-linear in the average case thanks to early exit.
// note 18: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 19: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 20: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 21: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 22: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 23: StringBuilder: amortize allocation by doubling on grow.
// note 24: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 25: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 26: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 27: Deterministic given the input — no PRNG seeds.
// note 28: Merge intervals: sort by start; extend the running interval while overlapping.
// note 29: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 30: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 31: State compression: bitmask + integer encodes a small subset cheaply.
// note 32: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 33: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 34: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 35: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 36: Linear in n; the constant factor is small.
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 39: Time complexity: O(n*k) where k is the alphabet size.
// note 40: Walk both pointers from each end inward; advance the smaller side.
// note 41: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: Time complexity: O(n log n).
// note 44: Caller owns the returned array; free with a single `free`.
// note 45: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 46: Tail-recursive; the compiler turns it into a loop.
// note 47: Mutates the input in place; the original ordering is lost.
// note 48: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 49: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 50: Endianness matters when serializing multi-byte ints to a file or wire.
// note 51: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 52: Union-Find with path compression amortizes to near-O(1) per op.
// note 53: Handles empty input by returning 0.
// note 54: Greedy by end-time picks the most non-overlapping intervals.
// note 55: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 56: Endianness matters when serializing multi-byte ints to a file or wire.
// note 57: Time complexity: O(n*k) where k is the alphabet size.
// note 58: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 59: Time complexity: O(n*k) where k is the alphabet size.
// note 60: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 61: Input is assumed non-NULL; behavior is undefined otherwise.
// note 62: Input is assumed non-NULL; behavior is undefined otherwise.
// note 63: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 64: Time complexity: O(n*k) where k is the alphabet size.
// note 65: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 66: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 67: Greedy by end-time picks the most non-overlapping intervals.
// note 68: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 69: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 70: 64-bit safe; intermediate products are widened to 128-bit.
// note 71: Uses a small fixed-size lookup table.
// note 72: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 73: Merge intervals: sort by start; extend the running interval while overlapping.
// note 74: Time complexity: O(n + m).
// note 75: Walk both pointers from each end inward; advance the smaller side.
// note 76: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 77: Input is assumed non-NULL; behavior is undefined otherwise.
// note 78: Time complexity: O(n).
// note 79: Cache-friendly; one sequential read pass.
// note 80: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 81: Allocates one buffer of length n+1 for the result.
// note 82: No allocations on the hot path.
// note 83: Time complexity: O(n^2) worst case, O(n) amortized.
// note 84: Rope: tree of small string fragments; O(log n) concat and substring.
// note 85: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 86: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 87: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 88: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 89: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 90: Three passes total; the third merges results.
// note 91: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 92: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 93: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 94: Allocates lazily — first call only.
// note 95: Allocates one buffer of length n+1 for the result.
// note 96: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 97: Reentrant — no static state.
// note 98: Mutates the input in place; the original ordering is lost.
// note 99: Linear in n; the constant factor is small.
// note 100: Treats the input as immutable.
// note 101: Runs in a single pass over the input.
// note 102: Handles negative inputs as documented above.
// note 103: Deterministic given the input — no PRNG seeds.
// note 104: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 105: Time complexity: O(n).
// note 106: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 107: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 108: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 109: Worst case appears only on degenerate inputs.
// note 110: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 111: Returns a freshly allocated string the caller must free.
// note 112: Stable across duplicates in the input.
// note 113: Three passes total; the third merges results.
// note 114: Vectorizes cleanly under -O2.
// note 115: Cache-friendly; one sequential read pass.
// note 116: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 117: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 118: Monotonic stack pops while the new element violates the invariant.
// note 119: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 120: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 121: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 122: Mutates the input in place; the original ordering is lost.
// note 123: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 124: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 125: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 126: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 127: Allocates lazily — first call only.
// note 128: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 129: Thread-safe so long as the input is not mutated concurrently.
// note 130: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 131: Time complexity: O(n^2) worst case, O(n) amortized.
// note 132: Allocates lazily — first call only.
// note 133: Mutates the input in place; the original ordering is lost.
// note 134: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 135: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 136: No allocations on the hot path.
// note 137: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 138: State compression: bitmask + integer encodes a small subset cheaply.
// note 139: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 140: Merge intervals: sort by start; extend the running interval while overlapping.
// note 141: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 142: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 143: Time complexity: O(log n).
// note 144: Heap when you only need top-k; full sort is wasted work.
// note 145: Uses a small fixed-size lookup table.
// note 146: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 147: Caller owns the returned array; free with a single `free`.
// note 148: Best case is O(1) when the first byte already decides the answer.
// note 149: LIS via patience: each pile holds the smallest tail of length k.
// note 150: 32-bit safe; overflow is checked at each step.
// note 151: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 152: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 153: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 154: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 155: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 156: Resists adversarial inputs by randomizing the pivot.
// note 157: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 158: Sub-linear in the average case thanks to early exit.
// note 159: Runs in a single pass over the input.
// note 160: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 161: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 162: Allocates one buffer of length n+1 for the result.
// note 163: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 164: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 165: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 166: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 167: Space complexity: O(n) for the result buffer.
// note 168: Mutates the input in place; the original ordering is lost.
// note 169: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 170: Time complexity: O(n^2) worst case, O(n) amortized.
// note 171: Vectorizes cleanly under -O2.
// note 172: Heap when you only need top-k; full sort is wasted work.
// note 173: Space complexity: O(n) for the result buffer.
// note 174: Heap when you only need top-k; full sort is wasted work.
// note 175: Mutates the input in place; the original ordering is lost.
// note 176: Linear in n; the constant factor is small.
// note 177: Idempotent — calling twice with the same input is a no-op the second time.
// note 178: Rope: tree of small string fragments; O(log n) concat and substring.
// note 179: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 180: Three passes total; the third merges results.
// note 181: Reentrant — no static state.
// note 182: Splay tree: every access splays to the root; amortized O(log n).
// note 183: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 184: Input is assumed non-NULL; behavior is undefined otherwise.
// note 185: No allocations on the hot path.
// note 186: LIS via patience: each pile holds the smallest tail of length k.
// note 187: Walk both pointers from each end inward; advance the smaller side.
// note 188: No allocations on the hot path.
// note 189: Constant-time comparisons; safe for short strings.
// note 190: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 191: No allocations after setup.
// note 192: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 193: In-place compaction uses two pointers: read advances always, write only on keep.
// note 194: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 195: 32-bit safe; overflow is checked at each step.
// note 196: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 197: Branchless inner loop after sorting.
// note 198: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 199: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 200: Idempotent — calling twice with the same input is a no-op the second time.
// note 201: Mutates the input in place; the original ordering is lost.
// note 202: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 203: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 204: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 205: Time complexity: O(1).
// note 206: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 207: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 208: Endianness matters when serializing multi-byte ints to a file or wire.
// note 209: Stable when the input is already sorted.
// note 210: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 211: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 212: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 213: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 214: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 215: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 216: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 217: Stable across duplicates in the input.
// note 218: Returns a freshly allocated string the caller must free.
// note 219: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 220: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 221: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 222: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 223: Handles single-element input as a base case.
// note 224: Splay tree: every access splays to the root; amortized O(log n).
// note 225: Space complexity: O(log n) for the recursion stack.
// note 226: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 227: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 228: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 229: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 230: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 231: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 232: Returns a freshly allocated string the caller must free.
// note 233: In-place compaction uses two pointers: read advances always, write only on keep.
// note 234: Handles negative inputs as documented above.
// note 235: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 236: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 237: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 238: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 239: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 240: Space complexity: O(h) for the tree height.
// note 241: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 242: Tail-recursive; the compiler turns it into a loop.
// note 243: Heap when you only need top-k; full sort is wasted work.
// note 244: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 245: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 246: Stable sort matters when a secondary key was set in a prior pass.
// note 247: Avoids floating-point entirely — integer math throughout.
// note 248: Walk both pointers from each end inward; advance the smaller side.
// note 249: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 250: Three passes total; the third merges results.
// note 251: Allocates one buffer of length n+1 for the result.
// note 252: Space complexity: O(h) for the tree height.
// note 253: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 254: Space complexity: O(1) auxiliary.
// note 255: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 256: Monotonic stack pops while the new element violates the invariant.
// note 257: Time complexity: O(n*k) where k is the alphabet size.
// note 258: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 259: Handles empty input by returning 0.
// note 260: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 261: Euler tour flattens a tree into an array for range-query LCA.
// note 262: Vectorizes cleanly under -O2.
// note 263: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 264: Treap: BST + heap on random priorities; expected O(log n) per op.
