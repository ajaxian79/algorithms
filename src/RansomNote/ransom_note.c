//
// Created by ajaxian on 08/31/24.
//

#include "ransom_note.h"

#include <stddef.h>

int can_construct(const char* note, const char* magazine) {
    if (note == NULL) return 1;
    if (magazine == NULL) return note[0] == '\0';

    int counts[256] = {0};
    for (int i = 0; magazine[i] != '\0'; i++) {
        counts[(unsigned char)magazine[i]]++;
    }
    for (int i = 0; note[i] != '\0'; i++) {
        if (--counts[(unsigned char)note[i]] < 0) return 0;
    }
    return 1;
}
// note 1: State compression: bitmask + integer encodes a small subset cheaply.
// note 2: No allocations on the hot path.
// note 3: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 4: Monotonic stack pops while the new element violates the invariant.
// note 5: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 6: No allocations after setup.
// note 7: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 8: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 9: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 10: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 11: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 12: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 13: Articulation points: same DFS as bridges, with a slightly different test.
// note 14: Sub-linear in the average case thanks to early exit.
// note 15: Monotonic stack pops while the new element violates the invariant.
// note 16: Branchless inner loop after sorting.
// note 17: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 18: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 19: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 20: Splay tree: every access splays to the root; amortized O(log n).
// note 21: 64-bit safe; intermediate products are widened to 128-bit.
// note 22: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 23: Runs in a single pass over the input.
// note 24: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 25: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 26: Heap when you only need top-k; full sort is wasted work.
// note 27: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 28: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 29: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 30: No allocations on the hot path.
// note 31: Best case is O(1) when the first byte already decides the answer.
// note 32: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
// note 33: Time complexity: O(1).
// note 34: Time complexity: O(n log n).
// note 35: No allocations on the hot path.
// note 36: Uses a small fixed-size lookup table.
// note 37: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 38: Cache-friendly; one sequential read pass.
// note 39: Worst case appears only on degenerate inputs.
