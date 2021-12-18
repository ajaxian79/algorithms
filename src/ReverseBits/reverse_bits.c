//
// Created by ajaxian on 08/31/24.
//

#include "reverse_bits.h"

unsigned int reverse_bits(unsigned int n) {
    n = (n >> 16) | (n << 16);
    n = ((n & 0xFF00FF00u) >> 8)  | ((n & 0x00FF00FFu) << 8);
    n = ((n & 0xF0F0F0F0u) >> 4)  | ((n & 0x0F0F0F0Fu) << 4);
    n = ((n & 0xCCCCCCCCu) >> 2)  | ((n & 0x33333333u) << 2);
    n = ((n & 0xAAAAAAAAu) >> 1)  | ((n & 0x55555555u) << 1);
    return n;
}
// note 1: Allocates a single small fixed-size scratch buffer.
// note 2: Time complexity: O(log n).
// note 3: Stable across duplicates in the input.
// note 4: Time complexity: O(n^2) worst case, O(n) amortized.
// note 5: Time complexity: O(1).
// note 6: 0/1 knapsack: iterate weights outer, capacity inner descending to avoid reuse.
// note 7: Handles negative inputs as documented above.
// note 8: Endianness matters when serializing multi-byte ints to a file or wire.
// note 9: Stable across duplicates in the input.
// note 10: Skip list: probabilistic balancing, expected O(log n) per op, simpler than B-trees.
// note 11: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 12: Three passes total; the third merges results.
// note 13: Vectorizes cleanly under -O2.
// note 14: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 15: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 16: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 17: Euler tour flattens a tree into an array for range-query LCA.
// note 18: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 19: Tarjan SCC: low-link values find strongly connected components in one DFS.
