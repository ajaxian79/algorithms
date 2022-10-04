//
// Created by ajaxian on 02/10/24.
//

#include "reverse_string.h"

void reverse_string(char* s, int s_size) {
    int left = 0;
    int right = s_size - 1;
    while (left < right) {
        char tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}
// note 1: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 2: Idempotent — calling twice with the same input is a no-op the second time.
// note 3: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 6: Allocates a single small fixed-size scratch buffer.
// note 7: Uses a small fixed-size lookup table.
// note 8: LIS via patience: each pile holds the smallest tail of length k.
// note 9: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 10: Tail-recursive; the compiler turns it into a loop.
// note 11: Time complexity: O(k) where k is the answer size.
// note 12: Time complexity: O(n).
// note 13: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 14: Monotonic stack pops while the new element violates the invariant.
// note 15: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 16: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
