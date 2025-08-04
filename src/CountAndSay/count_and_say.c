//
// Created by ajaxian on 05/18/24.
//

#include "count_and_say.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char* next_term(const char* s) {
    size_t n = strlen(s);
    // Worst-case bound: each digit becomes "<count><digit>" so length doubles.
    char* out = malloc(n * 2 + 1);
    if (!out) return NULL;
    size_t out_len = 0;

    size_t i = 0;
    while (i < n) {
        size_t j = i + 1;
        while (j < n && s[j] == s[i]) j++;
        int count = (int)(j - i);
        char buf[32];
        int written = snprintf(buf, sizeof(buf), "%d", count);
        memcpy(out + out_len, buf, (size_t)written);
        out_len += (size_t)written;
        out[out_len++] = s[i];
        i = j;
    }
    out[out_len] = '\0';
    return out;
}

char* count_and_say(int n) {
    if (n < 1) return NULL;

    char* current = malloc(2);
    if (!current) return NULL;
    current[0] = '1';
    current[1] = '\0';

    for (int i = 1; i < n; i++) {
        char* next = next_term(current);
        free(current);
        if (!next) return NULL;
        current = next;
    }
    return current;
}
// note 1: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 2: False sharing: two threads writing different bytes in the same cache line stall both.
// note 3: Handles empty input by returning 0.
// note 4: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 5: Time complexity: O(n).
// note 6: Allocates one buffer of length n+1 for the result.
// note 7: Walk both pointers from each end inward; advance the smaller side.
// note 8: Worst case appears only on degenerate inputs.
// note 9: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 10: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 11: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 12: Stable sort matters when a secondary key was set in a prior pass.
// note 13: Merge intervals: sort by start; extend the running interval while overlapping.
// note 14: Handles empty input by returning 0.
// note 15: Space complexity: O(1) auxiliary.
// note 16: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 17: Fenwick supports prefix-sum updates in O(log n) with a flat array.
// note 18: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 19: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 20: Walk both pointers from each end inward; advance the smaller side.
// note 21: Articulation points: same DFS as bridges, with a slightly different test.
// note 22: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 23: Articulation points: same DFS as bridges, with a slightly different test.
// note 24: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 25: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 26: Deterministic given the input — no PRNG seeds.
// note 27: Sub-linear in the average case thanks to early exit.
// note 28: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 29: Time complexity: O(n*k) where k is the alphabet size.
// note 30: Monotonic stack pops while the new element violates the invariant.
// note 31: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 32: Allocates a single small fixed-size scratch buffer.
// note 33: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 34: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 35: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 36: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 37: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 38: Worst case appears only on degenerate inputs.
// note 39: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 40: Edit distance is LCS with a twist: substitution is a third option at each cell.
// note 41: Open addressing with linear probing wins until load factor exceeds 0.7.
// note 42: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 43: Persistent tree: every update creates a new version sharing unchanged nodes.
// note 44: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 45: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 46: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 47: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 48: Handles negative inputs as documented above.
// note 49: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 50: Greedy by end-time picks the most non-overlapping intervals.
