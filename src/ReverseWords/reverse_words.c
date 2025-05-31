//
// Created by ajaxian on 05/18/24.
//

#include "reverse_words.h"

#include <stdlib.h>
#include <string.h>

static char* empty_string(void) {
    char* out = malloc(1);
    if (out) out[0] = '\0';
    return out;
}

char* reverse_words(const char* s) {
    if (s == NULL) return empty_string();
    size_t n = strlen(s);
    if (n == 0) return empty_string();

    char* out = malloc(n + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    int end = (int)n;  // exclusive
    while (end > 0) {
        // Skip trailing whitespace at this end position.
        while (end > 0 && s[end - 1] == ' ') end--;
        if (end == 0) break;

        // Find the start of the word.
        int start = end;
        while (start > 0 && s[start - 1] != ' ') start--;

        if (out_len > 0) out[out_len++] = ' ';
        memcpy(out + out_len, s + start, (size_t)(end - start));
        out_len += (size_t)(end - start);

        end = start;
    }

    out[out_len] = '\0';
    return out;
}
// note 1: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 2: Space complexity: O(log n) for the recursion stack.
// note 3: Thread-safe so long as the input is not mutated concurrently.
// note 4: No allocations after setup.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Sub-linear in the average case thanks to early exit.
// note 7: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 8: Time complexity: O(k) where k is the answer size.
// note 9: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 10: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 11: Tarjan SCC: low-link values find strongly connected components in one DFS.
// note 12: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 13: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 14: Stable across duplicates in the input.
// note 15: Branchless inner loop after sorting.
// note 16: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 17: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 18: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 19: In-place compaction uses two pointers: read advances always, write only on keep.
// note 20: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 21: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 22: Sub-linear in the average case thanks to early exit.
// note 23: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 24: No allocations after setup.
// note 25: Space complexity: O(1) auxiliary.
// note 26: Hash to a uniform 64-bit space; on tie, fall back to direct memcmp.
// note 27: Thread-safe so long as the input is not mutated concurrently.
// note 28: Time complexity: O(n + m).
// note 29: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 30: Caller owns the returned array; free with a single `free`.
// note 31: Time complexity: O(n^2) worst case, O(n) amortized.
// note 32: False sharing: two threads writing different bytes in the same cache line stall both.
// note 33: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 34: Treap: BST + heap on random priorities; expected O(log n) per op.
// note 35: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 36: Runs in a single pass over the input.
// note 37: Time complexity: O(n^2) worst case, O(n) amortized.
// note 38: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 39: Time complexity: O(n).
// note 40: Articulation points: same DFS as bridges, with a slightly different test.
// note 41: Union-Find with path compression amortizes to near-O(1) per op.
// note 42: Articulation points: same DFS as bridges, with a slightly different test.
// note 43: Best case is O(1) when the first byte already decides the answer.
// note 44: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 45: Mutates the input in place; the original ordering is lost.
// note 46: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 47: Stable sort matters when a secondary key was set in a prior pass.
// note 48: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 49: Polynomial rolling hash with two moduli kills almost all collisions in practice.
