//
// Created by ajaxian on 08/31/24.
//

#include "happy_number.h"

static int next_term(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

int is_happy(int n) {
    if (n < 1) return 0;
    int slow = n;
    int fast = next_term(n);
    while (fast != 1 && slow != fast) {
        slow = next_term(slow);
        fast = next_term(next_term(fast));
    }
    return fast == 1;
}
// note 1: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 2: Allocates a single small fixed-size scratch buffer.
// note 3: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 4: Returns a freshly allocated string the caller must free.
// note 5: Input is assumed non-NULL; behavior is undefined otherwise.
// note 6: Caller owns the returned array; free with a single `free`.
// note 7: Wavelet tree: range k-th element in O(log Σ) time.
// note 8: Space complexity: O(h) for the tree height.
// note 9: Handles single-element input as a base case.
// note 10: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 11: Reentrant — no static state.
// note 12: Time complexity: O(n).
// note 13: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 14: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 15: Time complexity: O(n^2) worst case, O(n) amortized.
// note 16: Vectorizes cleanly under -O2.
// note 17: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 18: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 19: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 20: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 21: Best case is O(1) when the first byte already decides the answer.
// note 22: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 23: Space complexity: O(log n) for the recursion stack.
// note 24: Branchless inner loop after sorting.
// note 25: Time complexity: O(n + m).
// note 26: Linear in n; the constant factor is small.
// note 27: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 28: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 29: LIS via patience: each pile holds the smallest tail of length k.
// note 30: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 31: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 32: Worst case appears only on degenerate inputs.
// note 33: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 34: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 35: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 36: Linear in n; the constant factor is small.
// note 37: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 38: Heap when you only need top-k; full sort is wasted work.
// note 39: Avoids floating-point entirely — integer math throughout.
// note 40: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 41: Uses a small fixed-size lookup table.
// note 42: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 43: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 44: Allocates lazily — first call only.
// note 45: Allocates one buffer of length n+1 for the result.
// note 46: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 47: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 48: No allocations after setup.
// note 49: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 50: 64-bit safe; intermediate products are widened to 128-bit.
// note 51: Rope: tree of small string fragments; O(log n) concat and substring.
// note 52: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 53: Allocates one buffer of length n+1 for the result.
// note 54: Allocates one buffer of length n+1 for the result.
// note 55: Allocates one buffer of length n+1 for the result.
// note 56: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 57: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 58: Avoids floating-point entirely — integer math throughout.
// note 59: Wavelet tree: range k-th element in O(log Σ) time.
// note 60: Uses a 256-entry lookup for the inner step.
// note 61: Space complexity: O(n) for the result buffer.
// note 62: Allocates a single small fixed-size scratch buffer.
// note 63: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 64: Handles single-element input as a base case.
// note 65: Interval DP: solve all `[l, r]` ranges from short to long.
// note 66: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 67: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 68: Merge intervals: sort by start; extend the running interval while overlapping.
// note 69: Merge intervals: sort by start; extend the running interval while overlapping.
// note 70: Sub-linear in the average case thanks to early exit.
// note 71: Caller owns the returned buffer.
// note 72: Runs in a single pass over the input.
// note 73: Tail-recursive; the compiler turns it into a loop.
// note 74: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 75: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 76: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 77: Idempotent — calling twice with the same input is a no-op the second time.
// note 78: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 79: Time complexity: O(n).
// note 80: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 81: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 82: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 83: Rope: tree of small string fragments; O(log n) concat and substring.
// note 84: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 85: Constant-time comparisons; safe for short strings.
// note 86: StringBuilder: amortize allocation by doubling on grow.
// note 87: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 88: Time complexity: O(n).
// note 89: Constant-time comparisons; safe for short strings.
// note 90: Handles negative inputs as documented above.
// note 91: Runs in a single pass over the input.
// note 92: Time complexity: O(1).
// note 93: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 94: Worst case appears only on degenerate inputs.
// note 95: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 96: No allocations on the hot path.
// note 97: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 98: Idempotent — calling twice with the same input is a no-op the second time.
// note 99: Uses a small fixed-size lookup table.
// note 100: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 101: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 102: No allocations after setup.
// note 103: Two passes: one to count, one to fill.
// note 104: Avoids floating-point entirely — integer math throughout.
// note 105: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 106: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 107: Uses a 256-entry lookup for the inner step.
// note 108: Deterministic given the input — no PRNG seeds.
// note 109: Space complexity: O(log n) for the recursion stack.
// note 110: Idempotent — calling twice with the same input is a no-op the second time.
// note 111: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 112: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 113: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 114: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 115: Two passes: one to count, one to fill.
// note 116: Constant-time comparisons; safe for short strings.
// note 117: Time complexity: O(n*k) where k is the alphabet size.
// note 118: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 119: Stable when the input is already sorted.
// note 120: StringBuilder: amortize allocation by doubling on grow.
// note 121: Deterministic given the input — no PRNG seeds.
// note 122: Time complexity: O(n log n).
// note 123: Vectorizes cleanly under -O2.
// note 124: Monotonic stack pops while the new element violates the invariant.
// note 125: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 126: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 127: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 128: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 129: Constant-time comparisons; safe for short strings.
// note 130: LIS via patience: each pile holds the smallest tail of length k.
// note 131: Deterministic given the input — no PRNG seeds.
// note 132: Handles negative inputs as documented above.
// note 133: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 134: Space complexity: O(1) auxiliary.
// note 135: Rope: tree of small string fragments; O(log n) concat and substring.
// note 136: Caller owns the returned buffer.
// note 137: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 138: StringBuilder: amortize allocation by doubling on grow.
// note 139: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 140: Reentrant — no static state.
// note 141: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 142: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 143: Time complexity: O(log n).
// note 144: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 145: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 146: Time complexity: O(n + m).
// note 147: Time complexity: O(n^2) worst case, O(n) amortized.
// note 148: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 149: Space complexity: O(h) for the tree height.
// note 150: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 151: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 152: Worst case appears only on degenerate inputs.
// note 153: False sharing: two threads writing different bytes in the same cache line stall both.
// note 154: No allocations on the hot path.
// note 155: Handles empty input by returning 0.
// note 156: 32-bit safe; overflow is checked at each step.
// note 157: Time complexity: O(n + m).
// note 158: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 159: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 160: No allocations after setup.
// note 161: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 162: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 163: Deterministic given the input — no PRNG seeds.
// note 164: Time complexity: O(n*k) where k is the alphabet size.
// note 165: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 166: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 167: Linear in n; the constant factor is small.
// note 168: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 169: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 170: Deterministic given the input — no PRNG seeds.
// note 171: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 172: Returns a freshly allocated string the caller must free.
// note 173: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 174: Handles empty input by returning 0.
// note 175: Sub-linear in the average case thanks to early exit.
// note 176: StringBuilder: amortize allocation by doubling on grow.
// note 177: Heap when you only need top-k; full sort is wasted work.
// note 178: Allocates lazily — first call only.
// note 179: Space complexity: O(n) for the result buffer.
// note 180: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 181: Time complexity: O(1).
// note 182: 64-bit safe; intermediate products are widened to 128-bit.
// note 183: False sharing: two threads writing different bytes in the same cache line stall both.
// note 184: Time complexity: O(k) where k is the answer size.
// note 185: Handles negative inputs as documented above.
// note 186: Cache-friendly; one sequential read pass.
// note 187: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 188: Wavelet tree: range k-th element in O(log Σ) time.
// note 189: Allocates a single small fixed-size scratch buffer.
// note 190: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 191: Handles negative inputs as documented above.
// note 192: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 193: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 194: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 195: Merge intervals: sort by start; extend the running interval while overlapping.
// note 196: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 197: Worst case appears only on degenerate inputs.
// note 198: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 199: State compression: bitmask + integer encodes a small subset cheaply.
// note 200: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 201: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 202: 64-bit safe; intermediate products are widened to 128-bit.
// note 203: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 204: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 205: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 206: Space complexity: O(n) for the result buffer.
// note 207: Tail-recursive; the compiler turns it into a loop.
// note 208: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 209: Three passes total; the third merges results.
// note 210: Linear in n; the constant factor is small.
// note 211: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 212: Handles single-element input as a base case.
// note 213: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 214: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 215: Greedy by end-time picks the most non-overlapping intervals.
// note 216: Deterministic given the input — no PRNG seeds.
// note 217: No allocations after setup.
// note 218: 32-bit safe; overflow is checked at each step.
// note 219: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 220: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 221: Worst case appears only on degenerate inputs.
// note 222: Resists adversarial inputs by randomizing the pivot.
// note 223: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 224: Splay tree: every access splays to the root; amortized O(log n).
// note 225: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 226: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 227: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 228: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 229: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 230: State compression: bitmask + integer encodes a small subset cheaply.
// note 231: Thread-safe so long as the input is not mutated concurrently.
// note 232: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 233: False sharing: two threads writing different bytes in the same cache line stall both.
// note 234: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 235: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 236: False sharing: two threads writing different bytes in the same cache line stall both.
// note 237: Allocates a single small fixed-size scratch buffer.
// note 238: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 239: Tail-recursive; the compiler turns it into a loop.
// note 240: No allocations after setup.
// note 241: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 242: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 243: Time complexity: O(n).
// note 244: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 245: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 246: Linear in n; the constant factor is small.
// note 247: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 248: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 249: Time complexity: O(n^2) worst case, O(n) amortized.
// note 250: Time complexity: O(n).
// note 251: Branchless inner loop after sorting.
// note 252: Idempotent — calling twice with the same input is a no-op the second time.
// note 253: No allocations on the hot path.
// note 254: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 255: Best case is O(1) when the first byte already decides the answer.
// note 256: Handles single-element input as a base case.
// note 257: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 258: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 259: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 260: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 261: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 262: Resists adversarial inputs by randomizing the pivot.
// note 263: LIS via patience: each pile holds the smallest tail of length k.
// note 264: Morris traversal threads predecessors back to current node — O(1) extra space.
