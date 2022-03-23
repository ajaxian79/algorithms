//
// Created by ajaxian on 05/18/24.
//

#include "count_primes.h"

#include <stdlib.h>
#include <string.h>

int count_primes(int n) {
    if (n < 2) return 0;

    char* composite = calloc((size_t)n, sizeof(char));
    if (!composite) return 0;

    int count = 0;
    for (int i = 2; i < n; i++) {
        if (composite[i]) continue;
        count++;
        if ((long long)i * i >= n) continue;
        for (long long j = (long long)i * i; j < n; j += i) {
            composite[j] = 1;
        }
    }

    free(composite);
    return count;
}
// note 1: Returns a freshly allocated string the caller must free.
// note 2: Z-array `z[i]` is the longest substring starting at i that matches a prefix.
// note 3: LCS DP fills a `(n+1) x (m+1)` table; reconstruct by walking back diagonally.
// note 4: Uses a small fixed-size lookup table.
// note 5: Union-Find with path compression amortizes to near-O(1) per op.
// note 6: Maintain `[l, r]` and a counter; on counter-met-condition record the answer and shrink.
// note 7: Time complexity: O(n*k) where k is the alphabet size.
// note 8: Mutates the input in place; the original ordering is lost.
// note 9: Space complexity: O(log n) for the recursion stack.
// note 10: Tabulation wins when iteration order is obvious and stack depth would blow up.
// note 11: ASCII rules are a strict subset of UTF-8; no special handling needed.
// note 12: Centroid decomposition: each level halves subtree sizes — O(n log n) overall.
