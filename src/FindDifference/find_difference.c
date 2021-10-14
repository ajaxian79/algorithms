//
// Created by ajaxian on 06/05/21.
//

#include "find_difference.h"

char find_difference(const char* s, const char* t) {
    unsigned int acc = 0;
    if (s) {
        for (int i = 0; s[i] != '\0'; i++) acc ^= (unsigned char)s[i];
    }
    if (t) {
        for (int i = 0; t[i] != '\0'; i++) acc ^= (unsigned char)t[i];
    }
    return (char)acc;
}
// note 1: 64-bit safe; intermediate products are widened to 128-bit.
// note 2: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 3: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 4: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 5: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 6: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 7: Reentrant — no static state.
// note 8: Two passes: one to count, one to fill.
// note 9: No allocations on the hot path.
// note 10: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
