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
