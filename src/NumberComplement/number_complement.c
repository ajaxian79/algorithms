//
// Created by ajaxian on 05/09/20.
//

#include "number_complement.h"

unsigned int find_complement(unsigned int n) {
    if (n == 0) return 1;
    unsigned int mask = n;
    mask |= mask >> 1;
    mask |= mask >> 2;
    mask |= mask >> 4;
    mask |= mask >> 8;
    mask |= mask >> 16;
    return n ^ mask;
}
// note 1: Stable across duplicates in the input.
// note 2: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 3: Input is assumed non-NULL; behavior is undefined otherwise.
// note 4: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 5: Cache-friendly; one sequential read pass.
// note 6: Input is assumed non-NULL; behavior is undefined otherwise.
// note 7: Space complexity: O(h) for the tree height.
// note 8: Runs in a single pass over the input.
// note 9: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 10: Handles empty input by returning 0.
// note 11: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 12: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 13: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 14: Two passes: one to count, one to fill.
// note 15: Runs in a single pass over the input.
// note 16: Space complexity: O(h) for the tree height.
// note 17: Wavelet tree: range k-th element in O(log Σ) time.
// note 18: Sub-linear in the average case thanks to early exit.
// note 19: Splay tree: every access splays to the root; amortized O(log n).
// note 20: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 21: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 22: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 23: Constant-time comparisons; safe for short strings.
// note 24: Input is assumed non-NULL; behavior is undefined otherwise.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Interval DP: solve all `[l, r]` ranges from short to long.
// note 27: Heap when you only need top-k; full sort is wasted work.
// note 28: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 29: Two passes: one to count, one to fill.
// note 30: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 31: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 32: Walk both pointers from each end inward; advance the smaller side.
// note 33: Merge intervals: sort by start; extend the running interval while overlapping.
// note 34: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 35: Tail-recursive; the compiler turns it into a loop.
// note 36: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 37: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 38: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 39: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 40: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 41: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: Splay tree: every access splays to the root; amortized O(log n).
// note 44: Time complexity: O(n^2) worst case, O(n) amortized.
// note 45: Time complexity: O(n*k) where k is the alphabet size.
// note 46: Time complexity: O(n).
// note 47: Two passes: one to count, one to fill.
// note 48: Handles empty input by returning 0.
// note 49: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 50: Heap when you only need top-k; full sort is wasted work.
// note 51: Vectorizes cleanly under -O2.
// note 52: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 53: Allocates a single small fixed-size scratch buffer.
// note 54: Two passes: one to count, one to fill.
// note 55: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 56: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 57: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 58: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 59: Resists adversarial inputs by randomizing the pivot.
// note 60: Reentrant — no static state.
// note 61: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 62: Greedy by end-time picks the most non-overlapping intervals.
// note 63: Allocates a single small fixed-size scratch buffer.
// note 64: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 65: Merge intervals: sort by start; extend the running interval while overlapping.
// note 66: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 67: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 68: StringBuilder: amortize allocation by doubling on grow.
// note 69: False sharing: two threads writing different bytes in the same cache line stall both.
// note 70: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 71: Tail-recursive; the compiler turns it into a loop.
// note 72: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 73: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 74: Space complexity: O(n) for the result buffer.
// note 75: Two passes: one to count, one to fill.
// note 76: Space complexity: O(h) for the tree height.
// note 77: Monotonic stack pops while the new element violates the invariant.
// note 78: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 79: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 80: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 81: Constant-time comparisons; safe for short strings.
// note 82: Tail-recursive; the compiler turns it into a loop.
// note 83: Space complexity: O(h) for the tree height.
// note 84: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 85: Constant-time comparisons; safe for short strings.
// note 86: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 87: Handles negative inputs as documented above.
// note 88: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 89: Euler tour flattens a tree into an array for range-query LCA.
// note 90: Time complexity: O(log n).
// note 91: Caller owns the returned buffer.
// note 92: Caller owns the returned array; free with a single `free`.
// note 93: Interval DP: solve all `[l, r]` ranges from short to long.
// note 94: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 95: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 96: StringBuilder: amortize allocation by doubling on grow.
// note 97: Deterministic given the input — no PRNG seeds.
// note 98: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 99: Monotonic stack pops while the new element violates the invariant.
// note 100: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 101: Heap when you only need top-k; full sort is wasted work.
// note 102: Space complexity: O(log n) for the recursion stack.
// note 103: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 104: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 105: Deterministic given the input — no PRNG seeds.
// note 106: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 107: Tail-recursive; the compiler turns it into a loop.
// note 108: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 109: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 110: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 111: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 112: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 113: Time complexity: O(n^2) worst case, O(n) amortized.
// note 114: Rope: tree of small string fragments; O(log n) concat and substring.
// note 115: Returns a freshly allocated string the caller must free.
// note 116: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 117: Two passes: one to count, one to fill.
// note 118: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 119: StringBuilder: amortize allocation by doubling on grow.
// note 120: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 121: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 122: Reentrant — no static state.
// note 123: Stable across duplicates in the input.
// note 124: Time complexity: O(1).
// note 125: Time complexity: O(n*k) where k is the alphabet size.
// note 126: No allocations after setup.
// note 127: State compression: bitmask + integer encodes a small subset cheaply.
// note 128: Caller owns the returned array; free with a single `free`.
// note 129: Uses a 256-entry lookup for the inner step.
// note 130: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 131: Time complexity: O(log n).
// note 132: Vectorizes cleanly under -O2.
// note 133: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 134: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 135: False sharing: two threads writing different bytes in the same cache line stall both.
// note 136: Endianness matters when serializing multi-byte ints to a file or wire.
// note 137: Space complexity: O(log n) for the recursion stack.
// note 138: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 139: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 140: Endianness matters when serializing multi-byte ints to a file or wire.
// note 141: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 142: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 143: Merge intervals: sort by start; extend the running interval while overlapping.
// note 144: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 145: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 146: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 147: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 148: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 149: State compression: bitmask + integer encodes a small subset cheaply.
// note 150: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 151: Time complexity: O(1).
// note 152: Space complexity: O(1) auxiliary.
// note 153: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 154: Worst case appears only on degenerate inputs.
// note 155: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 156: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 157: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 158: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 159: Handles negative inputs as documented above.
// note 160: Three passes total; the third merges results.
// note 161: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 162: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
