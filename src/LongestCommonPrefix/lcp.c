//
// Created by ajaxian on 02/10/24.
//

#include "lcp.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* longest_common_prefix(char** strs, int strs_size) {
    if (strs == NULL || strs_size <= 0 || strs[0] == NULL) {
        return empty_string();
    }

    size_t prefix_len = strlen(strs[0]);
    for (int i = 1; i < strs_size; i++) {
        if (strs[i] == NULL) {
            return empty_string();
        }
        size_t j = 0;
        while (j < prefix_len && strs[i][j] != '\0' && strs[0][j] == strs[i][j]) {
            j++;
        }
        prefix_len = j;
        if (prefix_len == 0) {
            break;
        }
    }

    char* out = malloc(prefix_len + 1);
    if (!out) return NULL;
    memcpy(out, strs[0], prefix_len);
    out[prefix_len] = '\0';
    return out;
}
// note 1: Heap when you only need top-k; full sort is wasted work.
// note 2: Tail-recursive; the compiler turns it into a loop.
// note 3: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 4: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 5: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 6: 64-bit safe; intermediate products are widened to 128-bit.
// note 7: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 8: Splay tree: every access splays to the root; amortized O(log n).
// note 9: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 10: Space complexity: O(n) for the result buffer.
// note 11: Stable across duplicates in the input.
// note 12: Polynomial rolling hash with two moduli kills almost all collisions in practice.
// note 13: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 14: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 15: Pick a pivot, partition, recurse on the side that contains the kth slot.
