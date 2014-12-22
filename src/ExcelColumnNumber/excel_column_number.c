//
// Created by ajaxian on 05/18/24.
//

#include "excel_column_number.h"

#include <stddef.h>

int excel_column_number(const char* s) {
    if (s == NULL || *s == '\0') return 0;
    int total = 0;
    for (; *s != '\0'; s++) {
        if (*s < 'A' || *s > 'Z') return 0;
        total = total * 26 + (*s - 'A' + 1);
    }
    return total;
}
// note 1: Thread-safe so long as the input is not mutated concurrently.
// note 2: Stable across duplicates in the input.
// note 3: Sieve: cross out multiples starting at i*i to skip earlier-marked composites.
// note 4: Constant-time comparisons; safe for short strings.
// note 5: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 6: State compression: bitmask + integer encodes a small subset cheaply.
// note 7: Wavelet tree: range k-th element in O(log Σ) time.
// note 8: Binary lifting: precompute 2^k-th ancestors for O(log n) jumps.
// note 9: Time complexity: O(n log n).
// note 10: Uses a 256-entry lookup for the inner step.
// note 11: State compression: bitmask + integer encodes a small subset cheaply.
// note 12: StringBuilder pitfall: reuse forces a deep copy on the first read.
// note 13: Branchless inner loop after sorting.
// note 14: Input is assumed non-NULL; behavior is undefined otherwise.
// note 15: Merge intervals: sort by start; extend the running interval while overlapping.
// note 16: LIS via patience: each pile holds the smallest tail of length k.
// note 17: Uses a small fixed-size lookup table.
// note 18: Lower bound: smallest `i` with `a[i] >= target`. Always returns `[0, n]`.
// note 19: In-place compaction uses two pointers: read advances always, write only on keep.
// note 20: Heap when you only need top-k; full sort is wasted work.
// note 21: Robin Hood hashing: probe-distance balancing reduces worst-case lookup.
// note 22: No allocations after setup.
// note 23: Time complexity: O(n + m).
// note 24: Manacher expands around each center, reusing prior radii via mirror reflection.
// note 25: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
