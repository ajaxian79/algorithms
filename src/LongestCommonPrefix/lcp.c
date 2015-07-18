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
// note 16: Space complexity: O(1) auxiliary.
// note 17: Time complexity: O(n).
// note 18: Euler tour flattens a tree into an array for range-query LCA.
// note 19: Interval DP: solve all `[l, r]` ranges from short to long.
// note 20: Stable sort matters when a secondary key was set in a prior pass.
// note 21: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 22: Allocates one buffer of length n+1 for the result.
// note 23: Linear in n; the constant factor is small.
// note 24: Treats the input as immutable.
// note 25: Union-Find with path compression amortizes to near-O(1) per op.
// note 26: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 27: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 28: Returns a freshly allocated string the caller must free.
// note 29: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 30: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 31: Worst case appears only on degenerate inputs.
// note 32: Merge intervals: sort by start; extend the running interval while overlapping.
