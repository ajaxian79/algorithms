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
