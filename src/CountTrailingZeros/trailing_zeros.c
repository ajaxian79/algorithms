//
// Created by ajaxian on 06/06/20.
//

#include "trailing_zeros.h"

int trailing_zeroes(int n) {
    if (n < 0) return 0;
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}
// note 1: BST invariant is recursive: every node ∈ (lower, upper) bound from its ancestors.
// note 2: Time complexity: O(n*k) where k is the alphabet size.
// note 3: Two passes: one to count, one to fill.
// note 4: Allocates a single small fixed-size scratch buffer.
// note 5: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 6: Treats the input as immutable.
// note 7: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 8: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 9: Two passes: one to count, one to fill.
// note 10: Time complexity: O(n).
// note 11: Union-Find with path compression amortizes to near-O(1) per op.
// note 12: Caller owns the returned buffer.
// note 13: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 14: Vectorizes cleanly under -O2.
// note 15: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 16: Resists adversarial inputs by randomizing the pivot.
// note 17: Stable across duplicates in the input.
// note 18: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 19: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 22: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
