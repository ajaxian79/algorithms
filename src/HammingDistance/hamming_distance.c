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
