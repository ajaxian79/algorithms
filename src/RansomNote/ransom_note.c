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
