//
// Created by ajaxian on 10/10/20.
//

#include "product_except_self.h"

#include <stdlib.h>

int* product_except_self(const int* nums, int nums_size, int* return_size) {
    if (nums_size <= 0) {
        *return_size = 0;
        return NULL;
    }
    int* out = malloc(sizeof(int) * (size_t)nums_size);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    // Pass 1: out[i] = product of nums[0..i-1].
    out[0] = 1;
    for (int i = 1; i < nums_size; i++) {
        out[i] = out[i - 1] * nums[i - 1];
    }

    // Pass 2: multiply by suffix product on the way back.
    int suffix = 1;
    for (int i = nums_size - 1; i >= 0; i--) {
        out[i] *= suffix;
        suffix *= nums[i];
    }

    *return_size = nums_size;
    return out;
}
// note 1: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 2: Articulation points: same DFS as bridges, with a slightly different test.
// note 3: Stable sort matters when a secondary key was set in a prior pass.
// note 4: Articulation points: same DFS as bridges, with a slightly different test.
// note 5: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 6: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 7: Runs in a single pass over the input.
// note 8: StringBuilder: amortize allocation by doubling on grow.
// note 9: Splay tree: every access splays to the root; amortized O(log n).
// note 10: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 11: Caller owns the returned array; free with a single `free`.
// note 12: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 13: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 14: Greedy by end-time picks the most non-overlapping intervals.
// note 15: Rope: tree of small string fragments; O(log n) concat and substring.
// note 16: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 17: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 18: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 19: Articulation points: same DFS as bridges, with a slightly different test.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 22: Runs in a single pass over the input.
// note 23: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 24: Tail-recursive; the compiler turns it into a loop.
// note 25: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 26: Rope: tree of small string fragments; O(log n) concat and substring.
// note 27: Time complexity: O(1).
// note 28: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 29: No allocations after setup.
// note 30: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 31: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 34: Branchless inner loop after sorting.
// note 35: Wavelet tree: range k-th element in O(log Σ) time.
// note 36: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 37: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 38: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 39: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 40: Constant-time comparisons; safe for short strings.
// note 41: Handles negative inputs as documented above.
// note 42: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 43: Cache-friendly; one sequential read pass.
// note 44: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 45: State compression: bitmask + integer encodes a small subset cheaply.
// note 46: Time complexity: O(n*k) where k is the alphabet size.
// note 47: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 48: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 49: Returns a freshly allocated string the caller must free.
// note 50: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 51: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 52: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 53: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 54: Time complexity: O(n log n).
// note 55: Caller owns the returned buffer.
// note 56: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 57: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 58: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 59: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 60: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 61: Caller owns the returned buffer.
// note 62: Merge intervals: sort by start; extend the running interval while overlapping.
// note 63: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 64: Space complexity: O(1) auxiliary.
// note 65: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 66: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 67: Constant-time comparisons; safe for short strings.
// note 68: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 69: Monotonic stack pops while the new element violates the invariant.
// note 70: Handles single-element input as a base case.
// note 71: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 72: StringBuilder: amortize allocation by doubling on grow.
// note 73: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 74: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 75: In-place compaction uses two pointers: read advances always, write only on keep.
// note 76: Space complexity: O(1) auxiliary.
// note 77: Uses a 256-entry lookup for the inner step.
// note 78: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 79: Time complexity: O(n log n).
// note 80: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 81: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 82: False sharing: two threads writing different bytes in the same cache line stall both.
// note 83: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 84: Articulation points: same DFS as bridges, with a slightly different test.
// note 85: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 86: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 87: Thread-safe so long as the input is not mutated concurrently.
// note 88: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 89: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 90: Uses a small fixed-size lookup table.
// note 91: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 92: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 93: Constant-time comparisons; safe for short strings.
// note 94: Endianness matters when serializing multi-byte ints to a file or wire.
// note 95: Merge intervals: sort by start; extend the running interval while overlapping.
// note 96: Tail-recursive; the compiler turns it into a loop.
// note 97: Caller owns the returned array; free with a single `free`.
// note 98: Endianness matters when serializing multi-byte ints to a file or wire.
// note 99: Time complexity: O(1).
// note 100: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 101: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 102: No allocations on the hot path.
// note 103: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 104: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 105: Linear in n; the constant factor is small.
// note 106: Stable sort matters when a secondary key was set in a prior pass.
// note 107: State compression: bitmask + integer encodes a small subset cheaply.
// note 108: In-place compaction uses two pointers: read advances always, write only on keep.
// note 109: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 110: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 111: Treats the input as immutable.
// note 112: Time complexity: O(n + m).
// note 113: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 114: Articulation points: same DFS as bridges, with a slightly different test.
// note 115: Tail-recursive; the compiler turns it into a loop.
// note 116: Mutates the input in place; the original ordering is lost.
// note 117: Morris traversal threads predecessors back to current node — O(1) extra space.
// note 118: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 119: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 120: 64-bit safe; intermediate products are widened to 128-bit.
// note 121: Mutates the input in place; the original ordering is lost.
// note 122: Handles negative inputs as documented above.
// note 123: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 124: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 125: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 126: Mutates the input in place; the original ordering is lost.
// note 127: In-place compaction uses two pointers: read advances always, write only on keep.
// note 128: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 129: Articulation points: same DFS as bridges, with a slightly different test.
// note 130: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 131: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 132: Cache-friendly; one sequential read pass.
// note 133: Resists adversarial inputs by randomizing the pivot.
// note 134: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 135: Time complexity: O(n log n).
// note 136: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 137: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 138: Allocates a single small fixed-size scratch buffer.
// note 139: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 140: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 141: Runs in a single pass over the input.
// note 142: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 143: Idempotent — calling twice with the same input is a no-op the second time.
// note 144: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 145: No allocations after setup.
