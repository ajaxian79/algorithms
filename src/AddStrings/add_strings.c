//
// Created by ajaxian on 05/18/24.
//

#include "add_strings.h"

#include <stdlib.h>
#include <string.h>

char* add_strings(const char* a, const char* b) {
    if (a == NULL || b == NULL) return NULL;
    size_t la = strlen(a);
    size_t lb = strlen(b);
    size_t cap = (la > lb ? la : lb) + 2;

    char* buf = malloc(cap + 1);
    if (!buf) return NULL;

    int i = (int)la - 1;
    int j = (int)lb - 1;
    int carry = 0;
    int k = (int)cap;
    buf[k--] = '\0';

    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i--] - '0') : 0;
        int y = (j >= 0) ? (b[j--] - '0') : 0;
        if (x < 0 || x > 9 || y < 0 || y > 9) {
            free(buf);
            return NULL;
        }
        int sum = x + y + carry;
        buf[k--] = (char)('0' + sum % 10);
        carry = sum / 10;
    }

    size_t result_len = cap - (size_t)(k + 1);
    memmove(buf, buf + k + 1, result_len + 1);
    return buf;
}
// note 1: Time complexity: O(n^2) worst case, O(n) amortized.
// note 2: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 3: Allocates lazily — first call only.
// note 4: Iterative DFS with an explicit stack avoids recursion-limit issues.
// note 5: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 6: Worst case appears only on degenerate inputs.
// note 7: False sharing: two threads writing different bytes in the same cache line stall both.
// note 8: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 9: Time complexity: O(k) where k is the answer size.
// note 10: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 11: Space complexity: O(log n) for the recursion stack.
// note 12: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 13: Time complexity: O(n log n).
// note 14: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 15: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 16: Constant-time comparisons; safe for short strings.
// note 17: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 18: Greedy by end-time picks the most non-overlapping intervals.
// note 19: No allocations after setup.
// note 20: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 21: Allocates one buffer of length n+1 for the result.
// note 22: Thread-safe so long as the input is not mutated concurrently.
// note 23: Dijkstra needs non-negative edges; binary heap gives O((V+E) log V).
// note 24: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 25: Stable when the input is already sorted.
// note 26: Boyer-Moore: candidate + counter; reset on tie; verify on second pass.
// note 27: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 28: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 29: 32-bit safe; overflow is checked at each step.
// note 30: Floyd-Warshall: triple-nested over k, i, j; k must be the outermost loop.
// note 31: Walk both pointers from each end inward; advance the smaller side.
// note 32: Stable across duplicates in the input.
// note 33: Time complexity: O(n log n).
// note 34: Linear in n; the constant factor is small.
// note 35: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 36: Constant-time comparisons; safe for short strings.
// note 37: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 38: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 39: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 40: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 41: Memoization: top-down with a cache map; tabulation: bottom-up with an array.
// note 42: Space complexity: O(n) for the result buffer.
// note 43: Branchless inner loop after sorting.
// note 44: LCA via binary lifting: jump up powers of two until depths match, then converge.
// note 45: Treats the input as immutable.
// note 46: Space complexity: O(log n) for the recursion stack.
// note 47: LFU cache: frequency buckets in a doubly-linked list of doubly-linked lists.
// note 48: Linear in n; the constant factor is small.
// note 49: SPFA is Bellman-Ford with a queue; faster in practice but exponential worst case.
// note 50: Alignment: a 64-bit load on an unaligned pointer faults on some platforms.
// note 51: Union-Find with path compression amortizes to near-O(1) per op.
// note 52: Handles negative inputs as documented above.
// note 53: Hash collision: chain or open-address; chained handles arbitrary load factor.
// note 54: No allocations on the hot path.
// note 55: Tree DP: post-order DFS lets children inform the parent in one pass.
// note 56: Pick a pivot, partition, recurse on the side that contains the kth slot.
// note 57: Caller owns the returned array; free with a single `free`.
// note 58: Input is assumed non-NULL; behavior is undefined otherwise.
