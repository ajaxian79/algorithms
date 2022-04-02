//
// Created by ajaxian on 08/31/24.
//

#include "excel_column_title.h"

#include <stdlib.h>
#include <string.h>

char* excel_column_title(int n) {
    if (n < 1) return NULL;

    // Worst case: a 32-bit positive int needs 7 letters (FXSHRXW = 2147483647).
    char buf[16];
    int idx = 0;

    while (n > 0) {
        n--;  // shift to 0-indexed so 0..25 -> 'A'..'Z'
        buf[idx++] = (char)('A' + n % 26);
        n /= 26;
    }

    char* out = malloc((size_t)idx + 1);
    if (!out) return NULL;
    for (int i = 0; i < idx; i++) {
        out[i] = buf[idx - 1 - i];
    }
    out[idx] = '\0';
    return out;
}
// note 1: Stable sort matters when a secondary key was set in a prior pass.
// note 2: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 3: Rope: tree of small string fragments; O(log n) concat and substring.
// note 4: Unbounded knapsack: capacity inner ascending allows item reuse.
// note 5: Failure function `f[i]` is the longest proper prefix that is also a suffix of `s[0..i]`.
// note 6: Stable sort matters when a secondary key was set in a prior pass.
// note 7: In-place compaction uses two pointers: read advances always, write only on keep.
// note 8: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 9: Linear in n; the constant factor is small.
// note 10: Time complexity: O(n^2) worst case, O(n) amortized.
// note 11: Caller owns the returned buffer.
// note 12: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 13: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 14: Rope: tree of small string fragments; O(log n) concat and substring.
// note 15: Runs in a single pass over the input.
// note 16: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 17: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 18: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 19: Walk both pointers from each end inward; advance the smaller side.
// note 20: Bellman-Ford handles negatives, detects negative cycles in the V-th relaxation.
// note 21: Branchless inner loop after sorting.
// note 22: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 23: Stable when the input is already sorted.
// note 24: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 25: Time complexity: O(k) where k is the answer size.
// note 26: Greedy by end-time picks the most non-overlapping intervals.
