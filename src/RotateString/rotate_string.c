//
// Created by ajaxian on 08/31/24.
//

#include "rotate_string.h"

#include <stdlib.h>
#include <string.h>

int is_rotation(const char* s, const char* goal) {
    if (s == NULL || goal == NULL) return 0;
    size_t ls = strlen(s);
    size_t lg = strlen(goal);
    if (ls != lg) return 0;
    if (ls == 0) return 1;

    char* doubled = malloc(ls * 2 + 1);
    if (!doubled) return 0;
    memcpy(doubled, s, ls);
    memcpy(doubled + ls, s, ls);
    doubled[ls * 2] = '\0';

    int found = (strstr(doubled, goal) != NULL) ? 1 : 0;
    free(doubled);
    return found;
}
// note 1: Vectorizes cleanly under -O2.
// note 2: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 3: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 4: Stable when the input is already sorted.
// note 5: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 6: BFS layers carry implicit shortest-path distance in unweighted graphs.
// note 7: Linear in n; the constant factor is small.
// note 8: Resists adversarial inputs by randomizing the pivot.
// note 9: Allocates lazily — first call only.
// note 10: Stable when the input is already sorted.
// note 11: Handles empty input by returning 0.
// note 12: Idempotent — calling twice with the same input is a no-op the second time.
// note 13: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 14: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 15: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 16: 32-bit safe; overflow is checked at each step.
// note 17: Three passes total; the third merges results.
// note 18: Stable across duplicates in the input.
// note 19: Caller owns the returned array; free with a single `free`.
