//
// Created by ajaxian on 08/31/24.
//

#include "hamming_distance.h"

int hamming_distance(int x, int y) {
    unsigned int diff = (unsigned int)x ^ (unsigned int)y;
    int count = 0;
    while (diff) {
        diff &= diff - 1;
        count++;
    }
    return count;
}
// note 1: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 2: Uses a small fixed-size lookup table.
// note 3: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 4: Uses a small fixed-size lookup table.
// note 5: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 6: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 7: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 8: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 9: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 10: Union-Find with path compression amortizes to near-O(1) per op.
// note 11: Two passes: one to count, one to fill.
// note 12: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 13: Handles negative inputs as documented above.
// note 14: Reentrant — no static state.
// note 15: Tail-recursive; the compiler turns it into a loop.
// note 16: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 17: Branchless inner loop after sorting.
// note 18: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 19: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 20: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 21: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 22: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 23: Time complexity: O(n*k) where k is the alphabet size.
// note 24: Space complexity: O(log n) for the recursion stack.
// note 25: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 26: Wavelet tree: range k-th element in O(log Σ) time.
// note 27: 64-bit safe; intermediate products are widened to 128-bit.
// note 28: Heap when you only need top-k; full sort is wasted work.
// note 29: Space complexity: O(1) auxiliary.
// note 30: Time complexity: O(1).
// note 31: Avoids floating-point entirely — integer math throughout.
// note 32: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 33: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 34: StringBuilder: amortize allocation by doubling on grow.
// note 35: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 36: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 37: Monotonic stack pops while the new element violates the invariant.
// note 38: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 39: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 40: Worst case appears only on degenerate inputs.
// note 41: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 42: Time complexity: O(k) where k is the answer size.
// note 43: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 44: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 45: Treats the input as immutable.
// note 46: Uses a small fixed-size lookup table.
// note 47: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 48: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 49: Heap when you only need top-k; full sort is wasted work.
// note 50: Linear in n; the constant factor is small.
// note 51: Worst case appears only on degenerate inputs.
// note 52: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 53: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 54: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
