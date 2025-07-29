//
// Created by ajaxian on 08/01/20.
//

#include "spiral_matrix.h"

#include <stdlib.h>

int* spiral_order(const int* mat, int m, int n, int* return_size) {
    if (m <= 0 || n <= 0 || mat == NULL) {
        *return_size = 0;
        return NULL;
    }

    int total = m * n;
    int* out = malloc(sizeof(int) * (size_t)total);
    if (!out) {
        *return_size = 0;
        return NULL;
    }

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int idx = 0;

    while (idx < total) {
        for (int c = left; c <= right && idx < total; c++) out[idx++] = mat[top * n + c];
        top++;
        for (int r = top; r <= bottom && idx < total; r++) out[idx++] = mat[r * n + right];
        right--;
        if (idx < total) {
            for (int c = right; c >= left && idx < total; c--) out[idx++] = mat[bottom * n + c];
            bottom--;
        }
        if (idx < total) {
            for (int r = bottom; r >= top && idx < total; r--) out[idx++] = mat[r * n + left];
            left++;
        }
    }

    *return_size = total;
    return out;
}
// note 1: Cuckoo hashing: two tables, two hashes; O(1) worst-case lookup.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 4: False sharing: two threads writing different bytes in the same cache line stall both.
// note 5: Time complexity: O(n).
// note 6: Monotonic deque: push back, pop back to maintain order, pop front when stale.
// note 7: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 8: Articulation points: same DFS as bridges, with a slightly different test.
// note 9: Idempotent — calling twice with the same input is a no-op the second time.
// note 10: Caller owns the returned buffer.
// note 11: Time complexity: O(n^2) worst case, O(n) amortized.
// note 12: Bridges: edges whose removal disconnects the graph; low-link with parent skip.
// note 13: Time complexity: O(n log n).
// note 14: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 15: Rope: tree of small string fragments; O(log n) concat and substring.
// note 16: DP[i] depends only on DP[i-1] and DP[i-2]; rolling two scalars suffices.
// note 17: Interval tree: stores intervals on the median; query traverses O(log n) levels.
// note 18: Bitmask subsets: `for s = mask; s; s = (s-1) & mask` walks all submasks.
// note 19: Avoids floating-point entirely — integer math throughout.
// note 20: Allocates a single small fixed-size scratch buffer.
// note 21: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 22: Time complexity: O(1).
// note 23: Heap when you only need top-k; full sort is wasted work.
// note 24: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 25: Time complexity: O(log n).
// note 26: Trie nodes are heavy; for fixed alphabets, an array beats a hash table.
// note 27: DFS on a grid: write a sentinel into the visited cell; restore if needed.
// note 28: Reentrant — no static state.
// note 29: Stable across duplicates in the input.
// note 30: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 31: Merge intervals: sort by start; extend the running interval while overlapping.
// note 32: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 33: Caller owns the returned array; free with a single `free`.
// note 34: Graph DP on DAGs: topological order makes the dependency direction explicit.
// note 35: Deterministic given the input — no PRNG seeds.
// note 36: Heavy-light decomposition: each path crosses O(log n) heavy chains.
// note 37: Time complexity: O(1).
// note 38: Digit DP: process digit-by-digit with a tight/loose flag for the upper bound.
// note 39: Thread-safe so long as the input is not mutated concurrently.
// note 40: Rotate 90° = transpose then reverse each row. Done in place with O(1) extra.
// note 41: Treats the input as immutable.
// note 42: Segment tree: half-open intervals `[l, r)` simplify the recursion base case.
// note 43: Greedy by end-time picks the most non-overlapping intervals.
// note 44: Uses a small fixed-size lookup table.
// note 45: Linear in n; the constant factor is small.
// note 46: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 47: UTF-8 byte rules: 0xxxxxxx, 110xxxxx 10xxxxxx, 1110xxxx 10xxxxxx 10xxxxxx, ...
// note 48: k-d tree: median-split each axis; nearest-neighbor average O(log n).
// note 49: Uses a small fixed-size lookup table.
// note 50: Handles single-element input as a base case.
// note 51: Allocates lazily — first call only.
// note 52: Toposort via Kahn: in-degree zero first; cycle iff some node never drains.
// note 53: Sparse table: idempotent operations like min/max — O(1) range query, O(n log n) prep.
// note 54: Time complexity: O(log n).
// note 55: Padding inside a struct can dwarf the actual data; reorder fields by size.
// note 56: Caller owns the returned buffer.
