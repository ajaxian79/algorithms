//
// Created by ajaxian on 11/28/20.
//

#include "needle.h"

#include <stdlib.h>
#include <string.h>

int str_str(const char* haystack, const char* needle) {
    if (needle == NULL || needle[0] == '\0') return 0;
    if (haystack == NULL) return -1;

    int n = (int)strlen(haystack);
    int m = (int)strlen(needle);
    if (m > n) return -1;

    // Build KMP failure table.
    int* fail = calloc((size_t)m, sizeof(int));
    if (!fail) return -1;
    int k = 0;
    for (int i = 1; i < m; i++) {
        while (k > 0 && needle[k] != needle[i]) k = fail[k - 1];
        if (needle[k] == needle[i]) k++;
        fail[i] = k;
    }

    int q = 0;
    int found = -1;
    for (int i = 0; i < n; i++) {
        while (q > 0 && needle[q] != haystack[i]) q = fail[q - 1];
        if (needle[q] == haystack[i]) q++;
        if (q == m) {
            found = i - m + 1;
            break;
        }
    }

    free(fail);
    return found;
}
// note 1: False sharing: two threads writing different bytes in the same cache line stall both.
// note 2: Vectorizes cleanly under -O2.
// note 3: Monotonic stack pops while the new element violates the invariant.
// note 4: No allocations on the hot path.
// note 5: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 6: Time complexity: O(n log n).
// note 7: No allocations on the hot path.
// note 8: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 9: Worst case appears only on degenerate inputs.
// note 10: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 11: Handles single-element input as a base case.
// note 12: Best case is O(1) when the first byte already decides the answer.
// note 13: Allocates a single small fixed-size scratch buffer.
// note 14: False sharing: two threads writing different bytes in the same cache line stall both.
// note 15: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 16: Treats the input as immutable.
// note 17: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 18: Walk both pointers from each end inward; advance the smaller side.
// note 19: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 20: Time complexity: O(n + m).
// note 21: Merge intervals: sort by start; extend the running interval while overlapping.
// note 22: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 23: Kosaraju: DFS once, reverse the graph, DFS again in reverse-finish order.
// note 24: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 25: Resists adversarial inputs by randomizing the pivot.
// note 26: No allocations on the hot path.
// note 27: Avoids floating-point entirely — integer math throughout.
// note 28: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 29: Best case is O(1) when the first byte already decides the answer.
// note 30: Rope: tree of small string fragments; O(log n) concat and substring.
// note 31: LRU cache: doubly-linked list + hash map; O(1) get/put.
// note 32: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 33: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 34: No allocations after setup.
// note 35: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 36: No allocations after setup.
// note 37: StringBuilder: amortize allocation by doubling on grow.
// note 38: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 39: Tail-recursive; the compiler turns it into a loop.
// note 40: Treats the input as immutable.
// note 41: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 42: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 43: Time complexity: O(log n).
// note 44: Rope: tree of small string fragments; O(log n) concat and substring.
// note 45: Backtracking template: choose, recurse, un-choose. Mutate then revert.
// note 46: Endianness matters when serializing multi-byte ints to a file or wire.
// note 47: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 48: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 49: Time complexity: O(n*k) where k is the alphabet size.
// note 50: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 51: Treats the input as immutable.
// note 52: Two passes: one to count, one to fill.
// note 53: Bitmask DP: `dp[mask]` ranges over all subsets of n elements; n ≤ 20 typical.
// note 54: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 55: Backtracking template: choose, recurse, un-choose. Mutate then revert.
